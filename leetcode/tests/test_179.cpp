#include "leetcode.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <vector>

namespace leetcode::testing
{
TEST(leetcode_problem_179, case1)
{
    std::vector<int> nums = {10, 2};
    std::string res = leetcode::largestNumber(nums);
    EXPECT_EQ(res, "210");
}

TEST(leetcode_problem_179, case2)
{
    std::vector<int> nums = {3, 30, 34, 5, 9};
    std::string res = leetcode::largestNumber(nums);
    EXPECT_EQ(res, "9534330");
}

TEST(leetcode_problem_179, case3)
{
    std::vector<int> nums = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    std::string res = leetcode::largestNumber(nums);
    EXPECT_EQ(res, "0");
}

TEST(leetcode_problem_179, case4)
{
    std::vector<int> nums = {201, 369, 7, 1, 2650, 047, 0};
    std::string res = leetcode::largestNumber(nums);
    EXPECT_EQ(res, "739369265020110");
}

TEST(leetcode_problem_179, case5)
{
    std::vector<int> nums = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    std::string res = leetcode::largestNumber(nums);
    EXPECT_EQ(res, "0");
}
} // namespace leetcode::testing
