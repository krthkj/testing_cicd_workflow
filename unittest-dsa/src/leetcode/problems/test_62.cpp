#include "leetcode.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include <vector>

namespace leetcode::testing
{

TEST(leetcode_problem_62, case1)
{
    auto res = leetcode::uniquePaths(3, 7);
    EXPECT_EQ(res, 28);
}

TEST(leetcode_problem_62, case2)
{
    auto res = leetcode::uniquePaths(3, 2);
    EXPECT_EQ(res, 3);
}

} // namespace leetcode::testing
