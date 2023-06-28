#include "leetcode.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

TEST(leetcode_problem_13, case1)
{
    int res = leetcode::romanToInt("III");
    EXPECT_EQ(res, 3);
}

TEST(leetcode_problem_13, case2)
{
    int res = leetcode::romanToInt("LVIII");
    EXPECT_EQ(res, 58);
}

TEST(leetcode_problem_13, case3)
{
    int res = leetcode::romanToInt("MCMXCIV");

    EXPECT_EQ(res, 1994);
}

TEST(leetcode_problem_13, case4)
{
    int res = leetcode::romanToInt("MDCCCLXXXIV");

    EXPECT_EQ(res, 1884);
}

TEST(leetcode_problem_13, case5)
{
    int res = leetcode::romanToInt("MMMCMXCIX");

    EXPECT_EQ(res, 3999);
}

/*
TEST(leetcode_problem_13, case6)
{
    int res = leetcode::romanToInt("MMMMCMXCIX");

    EXPECT_EQ(res, 4999);
}

TEST(leetcode_problem_13, case7)
{
    int res = leetcode::romanToInt("IIII");

    EXPECT_EQ(res, 0);
}

TEST(leetcode_problem_13, case8)
{
    int res = leetcode::romanToInt("MMMMMCMXCIX");

    EXPECT_EQ(res, 0);
}
*/
