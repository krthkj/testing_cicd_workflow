#include "leetcode.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

namespace leetcode::testing
{
TEST(leetcode_problem_9, Positive_Palindrome_Number)
{
    bool res = leetcode::isPalindrome(121);
    EXPECT_EQ(res, true);
}

TEST(leetcode_problem_9, Negative_Palindrome_Number)
{
    bool res = leetcode::isPalindrome(-121);
    EXPECT_EQ(res, false);
}

TEST(leetcode_problem_9, Positive_Number)
{
    bool res = leetcode::isPalindrome(10);
    EXPECT_EQ(res, false);
}

TEST(leetcode_problem_9, Negative_Number)
{
    bool res = leetcode::isPalindrome(-50);
    EXPECT_EQ(res, false);
}
} // namespace leetcode::testing
