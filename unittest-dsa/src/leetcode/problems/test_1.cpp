#include "leetcode.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include <vector>

namespace leetcode::testing
{
TEST(leetcode_problem_1, case1)
{
    std::vector<int> nums{2, 7, 11, 15};
    std::vector<int> res = leetcode::twoSum(nums, 9);
    std::vector<int> resVal{0, 1};
    EXPECT_EQ(res, resVal);
}

TEST(leetcode_problem_1, case2)
{
    std::vector<int> nums{3, 2, 4};
    auto res = leetcode::twoSum(nums, 6);
    std::vector<int> resVal{1, 2};
    EXPECT_EQ(res, resVal);
}

TEST(leetcode_problem_1, case3)
{
    std::vector<int> nums{3, 3};
    auto res = leetcode::twoSum(nums, 6);
    std::vector<int> resVal{0, 1};
    EXPECT_EQ(res, resVal);
}

} // namespace leetcode::testing
