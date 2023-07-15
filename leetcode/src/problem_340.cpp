/***********************************************************
 * 340. Longest Substring with At Most K Distinct Characters
 *
 * Given a string s and an integer k, return the length of the
 * longest substring of s that contains at most k distinct characters.
 *
 * Example 1:
 *   Input: s = "eceba", k = 2
 *   Output: 3
 *   Explanation: The substring is "ece" with length 3.
 *
 * Example 2:
 *   Input: s = "aa", k = 1
 *   Output: 2
 *   Explanation: The substring is "aa" with length 2.
 *
 * Constraints:
 *   1 <= s.length <= 5 * 104
 *   0 <= k <= 50
 ***********************************************************/

#include "leetcode.hpp"

#include <iostream>
#include <string>
#include <unordered_set>

namespace leetcode
{

/***********************************************************
 * Decleration
 ***********************************************************/
namespace problem_340
{
int solution_1(std::string& s, int k);
int solution_2(std::string& s, int k);
} // namespace problem_340

/***********************************************************
 * Implementation: solving main problem
 ***********************************************************/
int lengthOfLongestSubstringKDistinct(std::string s, int k)
{
    return problem_340::solution_2(s, k);
}

/***********************************************************
 * Implementation: Variations of Solution
 ***********************************************************/
int problem_340::solution_1(std::string& s, int k)
{
    std::unordered_set<char> uniq{};
    size_t l{0}, res{0}, subStrLen{0};
    for (size_t i{0}; i < s.size(); ++i) {
        if (uniq.count(s.at(i)) == 0) {
            if ((int)uniq.size() < k) {
                uniq.insert(s.at(i));
            } else {
                char tmp = s.at(l);
                uniq.erase(tmp);
                uniq.insert(s.at(i));
                size_t find_res = s.find(tmp, l);
                while (find_res <= i && find_res != std::string::npos) {
                    l = find_res + 1;
                    find_res = s.find(tmp, l);
                }
            }
        }
        subStrLen = i - l + 1;
        res = std::max(subStrLen, res);
    }
    return (int)res;
}

int problem_340::solution_2(std::string& s, int k)
{
    if (s.size() <= 0)
        return 0;
    if (k <= 0)
        return 0;

    std::unordered_set<char> uniq{};
    size_t l{0}, res{0}, subStrLen{0};
    for (size_t i{0}; i < s.size(); ++i) {
        if (uniq.count(s.at(i)) == 0) {
            if ((int)uniq.size() < k) {
                uniq.insert(s.at(i));
            } else {
                char tmp = s.at(l);
                uniq.erase(tmp);
                uniq.insert(s.at(i));
                size_t find_res = s.find(tmp, l);
                while (find_res <= i && find_res != std::string::npos) {
                    l = find_res + 1;
                    find_res = s.find(tmp, l);
                }
            }
        }
        subStrLen = i - l + 1;
        res = std::max(subStrLen, res);
    }
    return (int)res;
}
} // namespace leetcode
