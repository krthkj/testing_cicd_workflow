#include "leetcode.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

TEST(leetcode_problem_0, case1)
{
    bool res = leetcode::sample_problem();
    EXPECT_EQ(res, true);
}

/*
TEST(leetcode_problem_0, case2)
{
    bool res = leetcode::sample_problem();
    EXPECT_EQ(res, true);
}
*/
