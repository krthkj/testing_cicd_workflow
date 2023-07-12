#include "leetcode.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

TEST(leetcode_problem_1004, case1)
{
    std::vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;
    int res = leetcode::longestOnes(nums,k);
    EXPECT_EQ(res, 6);
}

TEST(leetcode_problem_1004, case2)
{
    std::vector<int> nums = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int k = 3;
    int res = leetcode::longestOnes(nums,k);
    EXPECT_EQ(res, 10);
}

