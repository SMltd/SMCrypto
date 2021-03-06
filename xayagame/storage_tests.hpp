// Copyright (C) 2018 The Xaya developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef XAYAGAME_STORAGE_TESTS_HPP
#define XAYAGAME_STORAGE_TESTS_HPP

#include "storage.hpp"
#include "uint256.hpp"

#include <gtest/gtest.h>

#include <glog/logging.h>

#include <string>

namespace xaya
{

/**
 * Type-parametrised test for basic properties of the StorageInterface.  It can
 * be used to test implementations.
 */
template <typename T>
  class BasicStorageTests : public testing::Test
{

protected:

  uint256 hash1, hash2;

  const GameStateData state1 = "state 1";
  const GameStateData state2 = "state 2";

  const UndoData undo1 = "undo 1";
  const UndoData undo2 = "undo 2";

  T storage;

  BasicStorageTests ()
  {
    CHECK (hash1.FromHex ("01" + std::string (62, '0')));
    CHECK (hash2.FromHex ("02" + std::string (62, '0')));
    this->storage.Initialise ();
  }

};

TYPED_TEST_CASE_P (BasicStorageTests);

TYPED_TEST_P (BasicStorageTests, Empty)
{
  uint256 hash;
  EXPECT_FALSE (this->storage.GetCurrentBlockHash (hash));
  UndoData undo;
  EXPECT_FALSE (this->storage.GetUndoData (this->hash1, undo));
}

TYPED_TEST_P (BasicStorageTests, CurrentState)
{
  uint256 hash;

  this->storage.SetCurrentGameState (this->hash1, this->state1);
  ASSERT_TRUE (this->storage.GetCurrentBlockHash (hash));
  EXPECT_EQ (hash, this->hash1);
  EXPECT_EQ (this->storage.GetCurrentGameState (), this->state1);

  this->storage.SetCurrentGameState (this->hash2, this->state2);
  ASSERT_TRUE (this->storage.GetCurrentBlockHash (hash));
  EXPECT_EQ (hash, this->hash2);
  EXPECT_EQ (this->storage.GetCurrentGameState (), this->state2);
}

TYPED_TEST_P (BasicStorageTests, StoringUndoData)
{
  UndoData undo;
  EXPECT_FALSE (this->storage.GetUndoData (this->hash1, undo));

  this->storage.AddUndoData (this->hash1, 42, this->undo1);
  ASSERT_TRUE (this->storage.GetUndoData (this->hash1, undo));
  EXPECT_EQ (undo, this->undo1);
  EXPECT_FALSE (this->storage.GetUndoData (this->hash2, undo));

  /* Adding twice should be fine (just have no effect but also not crash).  */
  this->storage.AddUndoData (this->hash1, 50, this->undo1);

  this->storage.AddUndoData (this->hash2, 10, this->undo2);
  ASSERT_TRUE (this->storage.GetUndoData (this->hash1, undo));
  EXPECT_EQ (undo, this->undo1);
  ASSERT_TRUE (this->storage.GetUndoData (this->hash2, undo));
  EXPECT_EQ (undo, this->undo2);

  /* Removing should be ok (not crash), but otherwise no effect is guaranteed
     (in particular, not that it will actually be removed).  */
  this->storage.ReleaseUndoData (this->hash1);
  ASSERT_TRUE (this->storage.GetUndoData (this->hash2, undo));
  EXPECT_EQ (undo, this->undo2);
  this->storage.ReleaseUndoData (this->hash2);
}

TYPED_TEST_P (BasicStorageTests, Clear)
{
  this->storage.SetCurrentGameState (this->hash1, this->state1);
  this->storage.AddUndoData (this->hash1, 18, this->undo1);

  uint256 hash;
  EXPECT_TRUE (this->storage.GetCurrentBlockHash (hash));
  UndoData undo;
  EXPECT_TRUE (this->storage.GetUndoData (this->hash1, undo));

  this->storage.Clear ();
  EXPECT_FALSE (this->storage.GetCurrentBlockHash (hash));
  EXPECT_FALSE (this->storage.GetUndoData (this->hash1, undo));
}

REGISTER_TYPED_TEST_CASE_P (BasicStorageTests,
                            Empty, CurrentState, StoringUndoData, Clear);

/**
 * Tests specific for the pruning/removing of undo data in a storage.  Since
 * the Storage interface itself does not require undo data to be removed when
 * possible, this functionality is not tested as part of the core storage tests.
 * The PruningStorageTests can be applied to implementations that wish to
 * guarantee immediate removal of released undo data.
 */
template <typename T>
  using PruningStorageTests = BasicStorageTests<T>;

TYPED_TEST_CASE_P (PruningStorageTests);

TYPED_TEST_P (PruningStorageTests, ReleaseUndoData)
{
  this->storage.AddUndoData (this->hash1, 20, this->undo1);

  UndoData undo;
  EXPECT_TRUE (this->storage.GetUndoData (this->hash1, undo));

  this->storage.ReleaseUndoData (this->hash1);
  EXPECT_FALSE (this->storage.GetUndoData (this->hash1, undo));
}

TYPED_TEST_P (PruningStorageTests, PruneUndoData)
{
  this->storage.AddUndoData (this->hash1, 42, this->undo1);
  this->storage.AddUndoData (this->hash2, 43, this->undo2);

  UndoData undo;
  EXPECT_TRUE (this->storage.GetUndoData (this->hash1, undo));
  EXPECT_TRUE (this->storage.GetUndoData (this->hash2, undo));

  this->storage.PruneUndoData (41);
  EXPECT_TRUE (this->storage.GetUndoData (this->hash1, undo));
  EXPECT_TRUE (this->storage.GetUndoData (this->hash2, undo));

  this->storage.PruneUndoData (42);
  EXPECT_FALSE (this->storage.GetUndoData (this->hash1, undo));
  EXPECT_TRUE (this->storage.GetUndoData (this->hash2, undo));

  /* Add back hash1, so that we can test pruning of multiple elements.  */
  this->storage.AddUndoData (this->hash1, 42, this->undo1);
  EXPECT_TRUE (this->storage.GetUndoData (this->hash1, undo));
  EXPECT_TRUE (this->storage.GetUndoData (this->hash2, undo));

  this->storage.PruneUndoData (43);
  EXPECT_FALSE (this->storage.GetUndoData (this->hash1, undo));
  EXPECT_FALSE (this->storage.GetUndoData (this->hash2, undo));
}

REGISTER_TYPED_TEST_CASE_P (PruningStorageTests,
                            ReleaseUndoData, PruneUndoData);

} // namespace xaya

#endif // XAYAGAME_STORAGE_TESTS_HPP
