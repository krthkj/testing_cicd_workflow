#include "leetcode.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

TEST(leetcode_problem_3, case1)
{
    int res = leetcode::lengthOfLongestSubstring("abcabcbb");
    EXPECT_EQ(res, 3);
}

TEST(leetcode_problem_3, case2)
{
    int res = leetcode::lengthOfLongestSubstring("bbbbb");
    EXPECT_EQ(res, 1);
}

TEST(leetcode_problem_3, case3)
{
    int res = leetcode::lengthOfLongestSubstring("pwwkew");
    EXPECT_EQ(res, 3);
}
