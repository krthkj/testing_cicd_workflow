#include "leetcode.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

TEST(leetcode_problem_69, case1)
{
    int res = leetcode::mySqrt(4);
    EXPECT_EQ(res, 2);
}

TEST(leetcode_problem_69, case2)
{
    int res = leetcode::mySqrt(8);
    EXPECT_EQ(res, 2);
}

TEST(leetcode_problem_69, case3)
{
    int res = leetcode::mySqrt(64);
    EXPECT_EQ(res, 8);
}

TEST(leetcode_problem_69, case4)
{
    int res = leetcode::mySqrt(9);
    EXPECT_EQ(res, 3);
}

TEST(leetcode_problem_69, case5)
{
    int res = leetcode::mySqrt(81);
    EXPECT_EQ(res, 9);
}
