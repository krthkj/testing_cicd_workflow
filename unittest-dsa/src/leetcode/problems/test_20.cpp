#include "leetcode.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

namespace leetcode::testing
{
TEST(leetcode_problem_20, case1)
{
    std::string s{"()"};
    bool res = leetcode::isValid(s);
    EXPECT_EQ(res, true);
}

TEST(leetcode_problem_20, case2)
{
    std::string s{"()[]{}"};
    bool res = leetcode::isValid(s);
    EXPECT_EQ(res, true);
}

TEST(leetcode_problem_20, case3)
{
    std::string s{"(]"};
    bool res = leetcode::isValid(s);
    EXPECT_EQ(res, false);
}

TEST(leetcode_problem_20, case4)
{
    std::string s{"{([])}"};
    bool res = leetcode::isValid(s);
    EXPECT_EQ(res, true);
}

} // namespace leetcode::testing
