#include "leetcode.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include <vector>

namespace leetcode::testing
{

TEST(leetcode_problem_168, case1)
{
    int val = 1;
    auto res = leetcode::convertToTitle(val);
    EXPECT_EQ(res, "A");
}

TEST(leetcode_problem_168, case2)
{
    int val = 28;
    auto res = leetcode::convertToTitle(val);
    EXPECT_EQ(res, "AB");
}

TEST(leetcode_problem_168, case3)
{
    int val = 701;
    auto res = leetcode::convertToTitle(val);
    EXPECT_EQ(res, "ZY");
}

} // namespace leetcode::testing
