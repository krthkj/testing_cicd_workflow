#include "leetcode.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include <vector>

namespace leetcode::testing
{

TEST(leetcode_problem_7, case1)
{
    auto res = leetcode::reverse(123);
    EXPECT_EQ(res, 321);
}

TEST(leetcode_problem_7, case2)
{
    auto res = leetcode::reverse(-123);
    EXPECT_EQ(res, -321);
}

TEST(leetcode_problem_7, case3)
{
    auto res = leetcode::reverse(120);
    EXPECT_EQ(res, 21);
}
} // namespace leetcode::testing
