#include "leetcode.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

namespace leetcode::testing
{

TEST(leetcode_problem_35, case1)
{
    std::vector<int> nums{1, 3, 5, 6};
    auto res = leetcode::searchInsert(nums, 5);
    EXPECT_EQ(res, 2);
}

TEST(leetcode_problem_35, case2)
{
    std::vector<int> nums{1, 3, 5, 6};
    auto res = leetcode::searchInsert(nums, 2);
    EXPECT_EQ(res, 1);
}

TEST(leetcode_problem_35, case3)
{
    std::vector<int> nums{1, 3, 5, 6};
    auto res = leetcode::searchInsert(nums, 7);
    EXPECT_EQ(res, 4);
}

} // namespace leetcode::testing
