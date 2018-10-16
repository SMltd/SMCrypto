SUBDIRS = gametest

noinst_LTLIBRARIES = smd.la
bin_PROGRAMS = smd

EXTRA_DIST = proto/smd.proto

smd_la_CXXFLAGS = $(JSONCPP_CFLAGS) $(GLOG_CFLAGS) $(PROTOBUF_CFLAGS)
smd_la_LIBADD = $(top_builddir)/xayagame/SMCrypto.la \
  $(JSONCPP_LIBS) $(GLOG_LIBS) $(PROTOBUF_LIBS)
smd_la_SOURCES = \
  logic.cpp \
  proto/smd.pb.cc
noinst_HEADERS = \
  logic.hpp \
  proto/smd.pb.h

smd_CXXFLAGS = \
  $(JSONCPP_CFLAGS) $(JSONRPCCLIENT_CFLAGS) $(JSONRPCSERVER_CFLAGS) \
  $(GLOG_CFLAGS) \
  $(GFLAGS_CFLAGS) $(PROTOBUF_CFLAGS)
smd_LDADD = \
  $(builddir)/smd.la \
  $(top_builddir)/xayagame/SMCrypto.la \
  $(GFLAGS_LIBS) $(PROTOBUF_LIBS)
smd_SOURCES = main.cpp

check_PROGRAMS = tests
TESTS = tests

tests_CXXFLAGS = \
  $(JSONCPP_CFLAGS) $(GLOG_CFLAGS) $(PROTOBUF_CFLAGS) $(GTEST_CFLAGS)
tests_LDADD = $(builddir)/smd.la \
  $(JSONCPP_LIBS) $(GLOB_LIBS) $(PROTOBUF_LIBS) $(GTEST_LIBS)
tests_SOURCES = \
  logic_tests.cpp

proto/smd.pb.h proto/smd.pb.cc: proto/smd.proto
protoc --cpp_out=. "$<"
