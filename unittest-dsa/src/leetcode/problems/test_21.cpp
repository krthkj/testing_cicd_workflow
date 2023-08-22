#include "leetcode.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include <vector>

namespace leetcode::testing
{

TEST(leetcode_problem_21, case1)
{
    std::vector<int> l1 = {1, 2, 4};
    std::vector<int> l2 = {1, 3, 4};
    auto res = leetcode::mergeTwoLists(leetcode::toListNode(l1), leetcode::toListNode(l2));
    std::vector<int> expVal = {1, 1, 2, 3, 4, 4};
    EXPECT_EQ(leetcode::toString(res), leetcode::toString(expVal));
}

TEST(leetcode_problem_21, case2)
{
    std::vector<int> l1 = {};
    std::vector<int> l2 = {};
    auto res = leetcode::mergeTwoLists(leetcode::toListNode(l1), leetcode::toListNode(l2));
    std::vector<int> expVal = {};
    EXPECT_EQ(leetcode::toString(res), leetcode::toString(expVal));
}

TEST(leetcode_problem_21, case3)
{
    std::vector<int> l1 = {};
    std::vector<int> l2 = {0};
    auto res = leetcode::mergeTwoLists(leetcode::toListNode(l1), leetcode::toListNode(l2));
    std::vector<int> expVal = {0};
    EXPECT_EQ(leetcode::toString(res), leetcode::toString(expVal));
}

TEST(leetcode_problem_21, case4)
{
    std::vector<int> l1 = {0};
    std::vector<int> l2 = {};
    auto res = leetcode::mergeTwoLists(leetcode::toListNode(l1), leetcode::toListNode(l2));
    std::vector<int> expVal = {0};
    EXPECT_EQ(leetcode::toString(res), leetcode::toString(expVal));
}

TEST(leetcode_problem_21, case5)
{
    std::vector<int> l1 = {-1, 9, 5, 10};
    std::vector<int> l2 = {4, 6, 7, 12};
    auto res = leetcode::mergeTwoLists(leetcode::toListNode(l1), leetcode::toListNode(l2));
    std::vector<int> expVal = {-1, 4, 6, 7, 9, 5, 10, 12};
    EXPECT_EQ(leetcode::toString(res), leetcode::toString(expVal));
}

} // namespace leetcode::testing
