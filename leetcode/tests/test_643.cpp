#include "leetcode.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

TEST(leetcode_problem_643, case1)
{
    std::vector<int> nums{1, 12, -5, -6, 50, 3};
    int k{4};

    double res = leetcode::findMaxAverage(nums, k);
    EXPECT_EQ(res, 12.75);
}

TEST(leetcode_problem_643, case2)
{
    std::vector<int> nums{5};
    int k{1};

    double res = leetcode::findMaxAverage(nums, k);
    EXPECT_EQ(res, 5);
}

TEST(leetcode_problem_643, case3)
{
    std::vector<int> nums{-1, 4, -50, -16, 20, 0, 73, 25, -41};
    int k{5};

    double res = leetcode::findMaxAverage(nums, k);
    EXPECT_EQ(res, 20.4);
}

TEST(leetcode_problem_643, case4)
{
    std::vector<int> nums{-1, 4, -50, -16, 20, 0, 73, 25, -41};
    int k{1};

    double res = leetcode::findMaxAverage(nums, k);
    EXPECT_EQ(res, 73);
}

/*
TEST(leetcode_problem_643, case5)
{
    std::vector<int> nums{-1,4};
    int k{1};

    double res = leetcode::findMaxAverage(nums,k);
    EXPECT_EQ(res, 1.5);
}

TEST(leetcode_problem_643, case6)
{
    std::vector<int> nums{6,4};
    int k{0};

    double res = leetcode::findMaxAverage(nums,k);
    EXPECT_EQ(res, 5);
}
*/
