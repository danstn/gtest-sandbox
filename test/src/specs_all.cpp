#include <limits.h>
#include "gtest/gtest.h"


TEST(SumTest2, twoValues){
  EXPECT_EQ(12 , 3 + 7);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

