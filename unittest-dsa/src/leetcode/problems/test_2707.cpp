#include "leetcode.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include <vector>

namespace leetcode::testing
{

TEST(leetcode_problem_2707, case1)
{
    std::string str{"leetscode"};
    std::vector<std::string> dict{"leet", "code", "leetcode"};
    auto res = leetcode::minExtraChar(str, dict);
    EXPECT_EQ(res, 1);
}

TEST(leetcode_problem_2707, case2)
{
    std::string str{"sayhelloworld"};
    std::vector<std::string> dict{"hello", "world"};
    auto res = leetcode::minExtraChar(str, dict);
    EXPECT_EQ(res, 3);
}

TEST(leetcode_problem_2707, case3)
{
    std::string str{"azvzulhlwxwobowijiyebeaskecvtjqwkmaqnvnaomaqnvf"};
    std::vector<std::string> dict{"na",  "i",     "edd", "wobow",  "kecv",   "b",     "n", "or", "jj",     "zul",  "vk",
                                  "yeb", "qnfac", "azv", "grtjba", "yswmjn", "xowio", "u", "xi", "pcmatm", "maqnv"};
    auto res = leetcode::minExtraChar(str, dict);
    EXPECT_EQ(res, 15);
}

} // namespace leetcode::testing
