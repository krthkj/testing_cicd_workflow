/***********************************************************
14. Longest Common Prefix
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

Constraints:
    1 <= strs.length <= 200
    0 <= strs[i].length <= 200
    strs[i] consists of only lowercase English letters.
***********************************************************/

#include "leetcode.hpp"

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

namespace leetcode
{

/***********************************************************
 * Decleration
 ***********************************************************/
namespace problem_14
{
std::string commonPrefix(std::string& str1, std::string& str2);
std::string commonPrefix_recursive(std::vector<std::string>& strs, size_t l, size_t r);
std::string solution_1(std::vector<std::string>& strs);
std::string solution_2(std::vector<std::string>& strs);
} // namespace problem_14

/***********************************************************
 * Implementation: solving main problem
 ***********************************************************/
std::string longestCommonPrefix(std::vector<std::string>& strs)
{
    return problem_14::solution_2(strs);
}

/***********************************************************
 * Implementation: Variations of Solution
 ***********************************************************/
std::string problem_14::commonPrefix(std::string& str1, std::string& str2)
{
    std::string common = "";
    size_t min_len = std::min(str1.size(), str2.size());
    for (size_t i{0}; i < min_len; ++i) {
        if (str1.at(i) != str2.at(i))
            return common;
        common += str1.at(i);
    }
    return common;
}

std::string problem_14::commonPrefix_recursive(std::vector<std::string>& strs, size_t l, size_t r)
{
    if (r == l)
        return strs.at(l);
    size_t mid = (l + r) / 2;
    std::string l_c = problem_14::commonPrefix_recursive(strs, l, mid);
    std::string r_c = problem_14::commonPrefix_recursive(strs, mid + 1, r);
    return problem_14::commonPrefix(l_c, r_c);
}

std::string problem_14::solution_1(std::vector<std::string>& strs)
{
    if (strs.size() == 0)
        return "";

    return commonPrefix_recursive(strs, 0, strs.size() - 1);
}

std::string problem_14::solution_2(std::vector<std::string>& strs)
{
    if (strs.size() == 0)
        return "";

    // std::sort(strs.begin(), strs.end()); // sorting not required
    std::vector<std::string>::const_iterator itr = strs.cbegin();
    std::string common = *itr;
    while (itr != strs.cend())
        common = commonPrefix( (std::string&)*(itr++), common);
    return common;
}

} // namespace leetcode
