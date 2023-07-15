#include "leetcode.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

namespace leetcode::testing
{
TEST(leetcode_problem_340, case1)
{
    std::string s = {"aa"};
    int k = 1;
    int res = leetcode::lengthOfLongestSubstringKDistinct(s, k);
    EXPECT_EQ(res, 2);
}

TEST(leetcode_problem_340, case2)
{
    std::string s = {"bab"};
    int k = 1;
    int res = leetcode::lengthOfLongestSubstringKDistinct(s, k);
    EXPECT_EQ(res, 1);
}

TEST(leetcode_problem_340, case3)
{
    std::string s = {"eceba"};
    int k = 2;
    int res = leetcode::lengthOfLongestSubstringKDistinct(s, k);
    EXPECT_EQ(res, 3);
}

TEST(leetcode_problem_340, case4)
{
    std::string s = {"ececbca"};
    int k = 2;
    int res = leetcode::lengthOfLongestSubstringKDistinct(s, k);
    EXPECT_EQ(res, 4);
}

TEST(leetcode_problem_340, case5)
{
    std::string s = {"baececbca"};
    int k = 2;
    int res = leetcode::lengthOfLongestSubstringKDistinct(s, k);
    EXPECT_EQ(res, 4);
}

TEST(leetcode_problem_340, case6)
{
    std::string s = {"baecaeceee"};
    int k = 2;
    int res = leetcode::lengthOfLongestSubstringKDistinct(s, k);
    EXPECT_EQ(res, 5);
}

TEST(leetcode_problem_340, case7)
{
    std::string s = {"aa"};
    int k = 0;
    int res = leetcode::lengthOfLongestSubstringKDistinct(s, k);
    EXPECT_EQ(res, 0);
}

TEST(leetcode_problem_340, case8)
{
    std::string s = {"abaccc"};
    int k = 2;
    int res = leetcode::lengthOfLongestSubstringKDistinct(s, k);
    EXPECT_EQ(res, 4);
}
} // namespace leetcode::testing
