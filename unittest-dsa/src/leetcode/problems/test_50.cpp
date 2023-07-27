#include "leetcode.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

namespace leetcode::testing
{

TEST(leetcode_problem_50, case1)
{
    double x{2.00000};
    int n{10};
    auto res = leetcode::myPow(x, n);
    EXPECT_EQ(res, 1024.0000);
}

TEST(leetcode_problem_50, case2)
{
    double x{2.10000};
    int n{3};
    auto res = leetcode::myPow(x, n);
    EXPECT_EQ(res, 9.261000000000001);
}

TEST(leetcode_problem_50, case3)
{
    double x{2.00000};
    int n{-2};
    auto res = leetcode::myPow(x, n);
    EXPECT_EQ(res, 0.2500);
}

} // namespace leetcode::testing
