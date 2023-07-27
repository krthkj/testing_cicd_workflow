#include "leetcode.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include <vector>

namespace leetcode::testing
{
TEST(leetcode_problem_1870, case1)
{
    std::vector<int> dist={1, 3, 2};
    double hour = 6;
    auto res = leetcode::minSpeedOnTime(dist, hour);
    EXPECT_EQ(res, 1);
}

TEST(leetcode_problem_1870, case2)
{
    std::vector<int> dist={1, 3, 2};
    double hour = 2.7;
    auto res = leetcode::minSpeedOnTime(dist, hour);
    EXPECT_EQ(res, 3);
}

TEST(leetcode_problem_1870, case3)
{
    std::vector<int> dist={1, 3, 2};
    double hour = 1.9;
    auto res = leetcode::minSpeedOnTime(dist, hour);
    EXPECT_EQ(res, -1);
}

TEST(leetcode_problem_1870, case4)
{
    std::vector<int> dist={1, 1, 100000};
    double hour = 2.01;
    auto res = leetcode::minSpeedOnTime(dist, hour);
    EXPECT_EQ(res, 10000000);
}
} // namespace leetcode::testing
