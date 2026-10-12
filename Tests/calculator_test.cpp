#include <gtest/gtest.h>

extern "C"
{
    #include "calculator.h"
}

TEST(CalculatorTest, add)
{
    EXPECT_EQ(add(10, 20), 30);
}

TEST(CalculatorTest, Subtraction)
{
    EXPECT_EQ(subtract(20, 10), 10);
}

TEST(CalculatorTest, Multiplication)
{
    EXPECT_EQ(multiply(5, 4), 20);
}

TEST(CalculatorTest, AdditionWithNegativeNumber)
{
    EXPECT_EQ(add(-10, 5), -5);
}