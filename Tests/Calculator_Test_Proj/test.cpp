#include "pch.h"
#include "..\..\calculator.h"



TEST(TestCaseName, Add_test_1) {
  EXPECT_EQ(add(1,1),2);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, sub_test) {
	EXPECT_EQ(sub(1, 1), 0);
	EXPECT_TRUE(true);
}

TEST(TestCaseName, Mul_Test) {
	EXPECT_EQ(multiply(1, 1), 1);
	EXPECT_TRUE(true);
}
