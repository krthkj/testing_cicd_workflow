#include "leetcode.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include <vector>

namespace leetcode::testing
{

TEST(leetcode_problem_167, case1)
{
    std::vector<int> nums{2, 7, 11, 15};
    auto res = leetcode::twoSum_1(nums, 9);
    std::vector<int> expVal{1,2};
    EXPECT_EQ(res, expVal);
}

TEST(leetcode_problem_167, case2)
{
    std::vector<int> nums{2, 3, 4};
    auto res = leetcode::twoSum_1(nums, 6);
    std::vector<int> expVal{1, 3};
    EXPECT_EQ(res, expVal);
}

TEST(leetcode_problem_167, case3)
{
    std::vector<int> nums{-1, 0};
    auto res = leetcode::twoSum_1(nums, -1);
    std::vector<int> expVal{1, 2};
    EXPECT_EQ(res, expVal);
}

} // namespace leetcode::testing
