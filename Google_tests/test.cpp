//
// Created by Max on 19.03.2024.
//

#include "gtest/gtest.h"
#include "../IntPower.h"

TEST(IntPowerTestSuite, IntPowerTest)
{
    IntPower intPower(2.0, 3);
    EXPECT_DOUBLE_EQ(intPower.power(), 8.0);

    ++intPower;
    EXPECT_DOUBLE_EQ(intPower.getFirst(), 3.0);
    --intPower;
    EXPECT_DOUBLE_EQ(intPower.getFirst(), 2.0);

    intPower++;
    EXPECT_EQ(intPower.getSecond(), 4);
    intPower--;
    EXPECT_EQ(intPower.getSecond(), 3);
}
