//
// Created by harrysu on 12/23/22.
//
#include <catch2/catch_all.hpp>
#include "run.h"

TEST_CASE("test empty input")
{
  std::stringstream in;
  std::stringstream out;
  run(in, out);
  CHECK(out.str() == "");
}