#include <limits.h>
#include "gtest/gtest.h"
#include "sum.hpp"

TEST(SumTest, twoValues){
  EXPECT_EQ(10 , sum(3, 7));
}
