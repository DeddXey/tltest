#include "doctest.h"
#include "delayer.h"

//----------------------------------------------------
TEST_CASE("delayer, delay to 1")
{

  int in[]   { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

  int out[] { 1, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  delayer<int, 1> d;

  auto ptr = 0;
  for (auto i: in) {
    CHECK_EQ(d.iteration(i), out[ptr++]);
  }

}


TEST_CASE("delayer, delay to 2")
{

  int in[]   { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

  int out[]  { 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  delayer<int, 2> d;

  auto ptr = 0;
  for (auto i: in) {
      CHECK_EQ(d.iteration(i), out[ptr++]);
  }

}