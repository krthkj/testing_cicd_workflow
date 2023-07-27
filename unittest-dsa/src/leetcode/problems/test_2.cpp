#include "leetcode.hpp"
#include "leetcode_ds.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include <vector>

namespace leetcode::testing
{

TEST(leetcode_problem_2, case1)
{
    std::vector<int> l1 = {2, 4, 3};
    std::vector<int> l2 = {5, 6, 4};
    auto res = leetcode::addTwoNumbers(leetcode::toListNode(l1), leetcode::toListNode(l2));
    std::vector<int> expVal = {7, 0, 8};
    EXPECT_EQ(leetcode::toString(res), leetcode::toString(expVal));
}

TEST(leetcode_problem_2, case2)
{
    std::vector<int> l1 = {0};
    std::vector<int> l2 = {0};
    auto res = leetcode::addTwoNumbers(leetcode::toListNode(l1), leetcode::toListNode(l2));
    std::vector<int> expVal = {0};
    EXPECT_EQ(leetcode::toString(res), leetcode::toString(expVal));
}

TEST(leetcode_problem_2, case3)
{
    std::vector<int> l1 = {9, 9, 9, 9, 9, 9, 9};
    std::vector<int> l2 = {9, 9, 9, 9};
    auto res = leetcode::addTwoNumbers(leetcode::toListNode(l1), leetcode::toListNode(l2));
    std::vector<int> expVal = {8, 9, 9, 9, 0, 0, 0, 1};
    EXPECT_EQ(leetcode::toString(res), leetcode::toString(expVal));
}

} // namespace leetcode::testing
