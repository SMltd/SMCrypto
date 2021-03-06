// Copyright (C) 2018 The Xaya developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "gamelogic.hpp"

#include <glog/logging.h>

namespace xaya
{

std::string
ChainToString (const Chain c)
{
  switch (c)
    {
    case Chain::UNKNOWN:
      return "unknown";
    case Chain::MAIN:
      return "main";
    case Chain::TEST:
      return "test";
    case Chain::REGTEST:
      return "regtest";
    }

  LOG (FATAL) << "Invalid chain enum value: " << static_cast<int> (c);
}

Chain
GameLogic::GetChain () const
{
  CHECK (chain != Chain::UNKNOWN);
  return chain;
}

void
GameLogic::SetChain (const Chain c)
{
  CHECK (chain == Chain::UNKNOWN || chain == c);
  CHECK (c != Chain::UNKNOWN);
  chain = c;
}

Json::Value
GameLogic::GameStateToJson (const GameStateData& state)
{
  return state;
}

void
GameLogic::BeginTransaction ()
{
  /* Nothing is done in the default implementation.  */
}

void
GameLogic::CommitTransaction ()
{
  /* Nothing is done in the default implementation.  */
}

void
GameLogic::RollbackTransaction ()
{
  /* Nothing is done in the default implementation.  */
}

GameStateData
CachingGame::ProcessForward (const GameStateData& oldState,
                             const Json::Value& blockData,
                             UndoData& undoData)
{
  const GameStateData newState = UpdateState (oldState, blockData);
  undoData = UndoData (oldState);
  return newState;
}

GameStateData
CachingGame::ProcessBackwards (const GameStateData& newState,
                               const Json::Value& blockData,
                               const UndoData& undoData)
{
  return GameStateData (undoData);
}

} // namespace xaya
