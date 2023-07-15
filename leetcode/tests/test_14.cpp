#include "leetcode.hpp"

#include <gtest/gtest.h>
#include <string>
#include <vector>

namespace leetcode::testing
{
TEST(leetcode_problem_14, case1)
{
    std::vector<std::string> strs = {"flower", "flow", "flight"};
    std::string res = leetcode::longestCommonPrefix(strs);
    EXPECT_EQ(res, "fl");
}

TEST(leetcode_problem_14, case2)
{
    std::vector<std::string> strs = {"dog", "racecar", "car"};
    std::string res = leetcode::longestCommonPrefix(strs);
    EXPECT_EQ(res, "");
}

TEST(leetcode_problem_14, case3)
{
    std::vector<std::string> strs = {"cir", "car"};
    std::string res = leetcode::longestCommonPrefix(strs);
    EXPECT_EQ(res, "c");
}
} // namespace leetcode::testing
