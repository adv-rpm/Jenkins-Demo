#include "pch.h"
#include "..\..\calculator.h"



// =========================
// Addition - 25 Test Cases
// =========================

TEST(Addition_Tests, Add_test_1)  { EXPECT_EQ(add(1, 1), 2); }
TEST(Addition_Tests, Add_test_2)  { EXPECT_EQ(add(2, 3), 5); }
TEST(Addition_Tests, Add_test_3)  { EXPECT_EQ(add(5, 5), 10); }
TEST(Addition_Tests, Add_test_4)  { EXPECT_EQ(add(10, 20), 30); }
TEST(Addition_Tests, Add_test_5)  { EXPECT_EQ(add(15, 25), 40); }
TEST(Addition_Tests, Add_test_6)  { EXPECT_EQ(add(50, 50), 100); }
TEST(Addition_Tests, Add_test_7)  { EXPECT_EQ(add(100, 200), 300); }
TEST(Addition_Tests, Add_test_8)  { EXPECT_EQ(add(7, 8), 15); }
TEST(Addition_Tests, Add_test_9)  { EXPECT_EQ(add(12, 13), 25); }
TEST(Addition_Tests, Add_test_10) { EXPECT_EQ(add(30, 40), 70); }

TEST(Addition_Tests, Add_test_11) { EXPECT_EQ(add(0, 0), 0); }
TEST(Addition_Tests, Add_test_12) { EXPECT_EQ(add(0, 10), 10); }
TEST(Addition_Tests, Add_test_13) { EXPECT_EQ(add(10, 0), 10); }
TEST(Addition_Tests, Add_test_14) { EXPECT_EQ(add(-1, 1), 0); }
TEST(Addition_Tests, Add_test_15) { EXPECT_EQ(add(-5, 10), 5); }
TEST(Addition_Tests, Add_test_16) { EXPECT_EQ(add(-10, -10), -20); }
TEST(Addition_Tests, Add_test_17) { EXPECT_EQ(add(25, 75), 100); }
TEST(Addition_Tests, Add_test_18) { EXPECT_EQ(add(99, 1), 100); }
TEST(Addition_Tests, Add_test_19) { EXPECT_EQ(add(125, 125), 250); }
TEST(Addition_Tests, Add_test_20) { EXPECT_EQ(add(500, 500), 1000); }

TEST(Addition_Tests, Add_test_21) { EXPECT_EQ(add(11, 22), 33); }
TEST(Addition_Tests, Add_test_22) { EXPECT_EQ(add(45, 55), 100); }
TEST(Addition_Tests, Add_test_23) { EXPECT_EQ(add(123, 321), 444); }
TEST(Addition_Tests, Add_test_24) { EXPECT_EQ(add(-100, 50), -50); }
TEST(Addition_Tests, Add_test_25) { EXPECT_EQ(add(1000, 2000), 3000); }


// ============================
// Subtraction - 25 Test Cases
// ============================

TEST(Subtraction_Tests, Sub_test_1)  { EXPECT_EQ(sub(1, 1), 0); }
TEST(Subtraction_Tests, Sub_test_2)  { EXPECT_EQ(sub(5, 3), 2); }
TEST(Subtraction_Tests, Sub_test_3)  { EXPECT_EQ(sub(10, 5), 5); }
TEST(Subtraction_Tests, Sub_test_4)  { EXPECT_EQ(sub(20, 10), 10); }
TEST(Subtraction_Tests, Sub_test_5)  { EXPECT_EQ(sub(50, 25), 25); }
TEST(Subtraction_Tests, Sub_test_6)  { EXPECT_EQ(sub(100, 50), 50); }
TEST(Subtraction_Tests, Sub_test_7)  { EXPECT_EQ(sub(200, 100), 100); }
TEST(Subtraction_Tests, Sub_test_8)  { EXPECT_EQ(sub(15, 5), 10); }
TEST(Subtraction_Tests, Sub_test_9)  { EXPECT_EQ(sub(30, 20), 10); }
TEST(Subtraction_Tests, Sub_test_10) { EXPECT_EQ(sub(70, 40), 30); }

TEST(Subtraction_Tests, Sub_test_11) { EXPECT_EQ(sub(0, 0), 0); }
TEST(Subtraction_Tests, Sub_test_12) { EXPECT_EQ(sub(0, 10), -10); }
TEST(Subtraction_Tests, Sub_test_13) { EXPECT_EQ(sub(10, 0), 10); }
TEST(Subtraction_Tests, Sub_test_14) { EXPECT_EQ(sub(-5, 5), -10); }
TEST(Subtraction_Tests, Sub_test_15) { EXPECT_EQ(sub(5, 10), -5); }
TEST(Subtraction_Tests, Sub_test_16) { EXPECT_EQ(sub(-10, -10), 0); }
TEST(Subtraction_Tests, Sub_test_17) { EXPECT_EQ(sub(100, 25), 75); }
TEST(Subtraction_Tests, Sub_test_18) { EXPECT_EQ(sub(100, 99), 1); }
TEST(Subtraction_Tests, Sub_test_19) { EXPECT_EQ(sub(250, 125), 125); }
TEST(Subtraction_Tests, Sub_test_20) { EXPECT_EQ(sub(1000, 500), 500); }

TEST(Subtraction_Tests, Sub_test_21) { EXPECT_EQ(sub(33, 22), 11); }
TEST(Subtraction_Tests, Sub_test_22) { EXPECT_EQ(sub(100, 55), 45); }
TEST(Subtraction_Tests, Sub_test_23) { EXPECT_EQ(sub(444, 321), 123); }
TEST(Subtraction_Tests, Sub_test_24) { EXPECT_EQ(sub(-50, 50), -100); }
TEST(Subtraction_Tests, Sub_test_25) { EXPECT_EQ(sub(3000, 2000), 1000); }


// ===============================
// Multiplication - 25 Test Cases
// ===============================

TEST(Multiplication_Tests, Mul_test_1)  { EXPECT_EQ(multiply(1, 1), 1); }
TEST(Multiplication_Tests, Mul_test_2)  { EXPECT_EQ(multiply(2, 3), 6); }
TEST(Multiplication_Tests, Mul_test_3)  { EXPECT_EQ(multiply(5, 5), 25); }
TEST(Multiplication_Tests, Mul_test_4)  { EXPECT_EQ(multiply(10, 2), 20); }
TEST(Multiplication_Tests, Mul_test_5)  { EXPECT_EQ(multiply(4, 5), 20); }
TEST(Multiplication_Tests, Mul_test_6)  { EXPECT_EQ(multiply(10, 10), 100); }
TEST(Multiplication_Tests, Mul_test_7)  { EXPECT_EQ(multiply(20, 5), 100); }
TEST(Multiplication_Tests, Mul_test_8)  { EXPECT_EQ(multiply(7, 8), 56); }
TEST(Multiplication_Tests, Mul_test_9)  { EXPECT_EQ(multiply(12, 3), 36); }
TEST(Multiplication_Tests, Mul_test_10) { EXPECT_EQ(multiply(15, 4), 60); }

TEST(Multiplication_Tests, Mul_test_11) { EXPECT_EQ(multiply(0, 0), 0); }
TEST(Multiplication_Tests, Mul_test_12) { EXPECT_EQ(multiply(0, 10), 0); }
TEST(Multiplication_Tests, Mul_test_13) { EXPECT_EQ(multiply(10, 0), 0); }
TEST(Multiplication_Tests, Mul_test_14) { EXPECT_EQ(multiply(-1, 1), -1); }
TEST(Multiplication_Tests, Mul_test_15) { EXPECT_EQ(multiply(-5, 5), -25); }
TEST(Multiplication_Tests, Mul_test_16) { EXPECT_EQ(multiply(-10, -10), 100); }
TEST(Multiplication_Tests, Mul_test_17) { EXPECT_EQ(multiply(25, 4), 100); }
TEST(Multiplication_Tests, Mul_test_18) { EXPECT_EQ(multiply(99, 1), 99); }
TEST(Multiplication_Tests, Mul_test_19) { EXPECT_EQ(multiply(125, 2), 250); }
TEST(Multiplication_Tests, Mul_test_20) { EXPECT_EQ(multiply(100, 10), 1000); }

TEST(Multiplication_Tests, Mul_test_21) { EXPECT_EQ(multiply(11, 3), 33); }
TEST(Multiplication_Tests, Mul_test_22) { EXPECT_EQ(multiply(20, 5), 100); }
TEST(Multiplication_Tests, Mul_test_23) { EXPECT_EQ(multiply(12, 12), 144); }
TEST(Multiplication_Tests, Mul_test_24) { EXPECT_EQ(multiply(-10, 5), -50); }
TEST(Multiplication_Tests, Mul_test_25) { EXPECT_EQ(multiply(100, 20), 2000); }

TEST(Limit_Value_Tests, Limit_test_1) { EXPECT_EQ(limit_value(-1000), 0); }
TEST(Limit_Value_Tests, Limit_test_2) { EXPECT_EQ(limit_value(-500), 0); }
TEST(Limit_Value_Tests, Limit_test_3) { EXPECT_EQ(limit_value(-100), 0); }
TEST(Limit_Value_Tests, Limit_test_4) { EXPECT_EQ(limit_value(-50), 0); }
TEST(Limit_Value_Tests, Limit_test_5) { EXPECT_EQ(limit_value(-10), 0); }
TEST(Limit_Value_Tests, Limit_test_6) { EXPECT_EQ(limit_value(-5), 0); }
TEST(Limit_Value_Tests, Limit_test_7) { EXPECT_EQ(limit_value(-2), 0); }
TEST(Limit_Value_Tests, Limit_test_8) { EXPECT_EQ(limit_value(-1), 0); }

TEST(Limit_Value_Tests, Limit_test_9) { EXPECT_EQ(limit_value(0), 0); }
TEST(Limit_Value_Tests, Limit_test_10) { EXPECT_EQ(limit_value(1), 1); }
TEST(Limit_Value_Tests, Limit_test_11) { EXPECT_EQ(limit_value(2), 2); }
TEST(Limit_Value_Tests, Limit_test_12) { EXPECT_EQ(limit_value(5), 5); }
TEST(Limit_Value_Tests, Limit_test_13) { EXPECT_EQ(limit_value(10), 10); }
TEST(Limit_Value_Tests, Limit_test_14) { EXPECT_EQ(limit_value(15), 15); }
TEST(Limit_Value_Tests, Limit_test_15) { EXPECT_EQ(limit_value(20), 20); }
TEST(Limit_Value_Tests, Limit_test_16) { EXPECT_EQ(limit_value(25), 25); }
TEST(Limit_Value_Tests, Limit_test_17) { EXPECT_EQ(limit_value(30), 30); }
TEST(Limit_Value_Tests, Limit_test_18) { EXPECT_EQ(limit_value(35), 35); }
TEST(Limit_Value_Tests, Limit_test_19) { EXPECT_EQ(limit_value(40), 40); }
TEST(Limit_Value_Tests, Limit_test_20) { EXPECT_EQ(limit_value(45), 45); }
TEST(Limit_Value_Tests, Limit_test_21) { EXPECT_EQ(limit_value(50), 50); }
TEST(Limit_Value_Tests, Limit_test_22) { EXPECT_EQ(limit_value(55), 55); }
TEST(Limit_Value_Tests, Limit_test_23) { EXPECT_EQ(limit_value(60), 60); }
TEST(Limit_Value_Tests, Limit_test_24) { EXPECT_EQ(limit_value(65), 65); }
TEST(Limit_Value_Tests, Limit_test_25) { EXPECT_EQ(limit_value(70), 70); }
TEST(Limit_Value_Tests, Limit_test_26) { EXPECT_EQ(limit_value(75), 75); }
TEST(Limit_Value_Tests, Limit_test_27) { EXPECT_EQ(limit_value(80), 80); }
TEST(Limit_Value_Tests, Limit_test_28) { EXPECT_EQ(limit_value(85), 85); }
TEST(Limit_Value_Tests, Limit_test_29) { EXPECT_EQ(limit_value(90), 90); }
TEST(Limit_Value_Tests, Limit_test_30) { EXPECT_EQ(limit_value(91), 91); }
TEST(Limit_Value_Tests, Limit_test_31) { EXPECT_EQ(limit_value(92), 92); }
TEST(Limit_Value_Tests, Limit_test_32) { EXPECT_EQ(limit_value(93), 93); }
TEST(Limit_Value_Tests, Limit_test_33) { EXPECT_EQ(limit_value(94), 94); }
TEST(Limit_Value_Tests, Limit_test_34) { EXPECT_EQ(limit_value(95), 95); }
TEST(Limit_Value_Tests, Limit_test_35) { EXPECT_EQ(limit_value(96), 96); }
TEST(Limit_Value_Tests, Limit_test_36) { EXPECT_EQ(limit_value(97), 97); }
TEST(Limit_Value_Tests, Limit_test_37) { EXPECT_EQ(limit_value(98), 98); }
TEST(Limit_Value_Tests, Limit_test_38) { EXPECT_EQ(limit_value(99), 99); }
TEST(Limit_Value_Tests, Limit_test_39) { EXPECT_EQ(limit_value(100), 100); }

TEST(Limit_Value_Tests, Limit_test_40) { EXPECT_EQ(limit_value(101), 100); }
TEST(Limit_Value_Tests, Limit_test_41) { EXPECT_EQ(limit_value(102), 100); }
TEST(Limit_Value_Tests, Limit_test_42) { EXPECT_EQ(limit_value(105), 100); }
TEST(Limit_Value_Tests, Limit_test_43) { EXPECT_EQ(limit_value(110), 100); }
TEST(Limit_Value_Tests, Limit_test_44) { EXPECT_EQ(limit_value(120), 100); }
TEST(Limit_Value_Tests, Limit_test_45) { EXPECT_EQ(limit_value(150), 100); }


// ===== INTENTIONAL FAILURES FOR JENKINS DEMO =====

// Actual result = 0
TEST(Limit_Value_Tests, Limit_test_46) {
    EXPECT_EQ(limit_value(-10), 0);
}

// Actual result = 25
TEST(Limit_Value_Tests, Limit_test_47) {
    EXPECT_EQ(limit_value(25), 25);
}

// Actual result = 75
TEST(Limit_Value_Tests, Limit_test_48) {
    EXPECT_EQ(limit_value(75), 70);
}

// Actual result = 100
TEST(Limit_Value_Tests, Limit_test_49) {
    EXPECT_EQ(limit_value(101), 101);
}

// Actual result = 100
TEST(Limit_Value_Tests, Limit_test_50) {
    EXPECT_EQ(limit_value(500), 500);
}