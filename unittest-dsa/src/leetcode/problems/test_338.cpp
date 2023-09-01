#include "leetcode.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include <vector>

namespace leetcode::testing
{

TEST(leetcode_problem_338, case1)
{
    auto res = leetcode::countBits(2);
    std::vector<int> expVal = {0,1,1};
    EXPECT_EQ(leetcode::toString(res), leetcode::toString(expVal));
}

TEST(leetcode_problem_338, case2)
{
    auto res = leetcode::countBits(5);
    std::vector<int> expVal = {0,1,1,2,1,2};
    EXPECT_EQ(leetcode::toString(res), leetcode::toString(expVal));
}
TEST(leetcode_problem_338, case3)
{
    auto res = leetcode::countBits(8);
    std::vector<int> expVal = {0,1,1,2,1,2,2,3,1};
    EXPECT_EQ(leetcode::toString(res), leetcode::toString(expVal));
}

} // namespace leetcode::testing
