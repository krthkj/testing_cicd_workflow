/***********************************************************
 * 2707. Extra Characters in a String
 * 
 * You are given a 0-indexed string s and a dictionary of words dictionary.
 * You have to break s into one or more non-overlapping substrings such
 * that each substring is present in dictionary. There may be some extra
 * characters in s which are not present in any of the substrings.
 * 
 * Return the minimum number of extra characters left over if you break up s optimally.
 * 
 * Example 1:
 * Input: s = "leetscode", dictionary = ["leet","code","leetcode"]
 * Output: 1
 * Explanation: We can break s in two substrings: "leet" from index 0 to 3 and
 * "code" from index 5 to 8. There is only 1 unused character (at index 4), so we return 1.
 * 
 * Example 2:
 * Input: s = "sayhelloworld", dictionary = ["hello","world"]
 * Output: 3
 * Explanation: We can break s in two substrings: "hello" from index 3 to 7 and
 * "world" from index 8 to 12. The characters at indices 0, 1, 2 are not used in
 * any substring and thus are considered as extra characters. Hence, we return 3.
 * 
 * Constraints:
 *   1 <= s.length <= 50
 *   1 <= dictionary.length <= 50
 *   1 <= dictionary[i].length <= 50
 *   dictionary[i] and s consists of only lowercase English letters
 *   dictionary contains distinct words
 ***********************************************************/

#include "leetcode.hpp"

#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace leetcode
{

/***********************************************************
 * Decleration
 ***********************************************************/
namespace problem_2707
{
int solution_1(std::string s, std::vector<std::string>& dictionary);
} // namespace problem_2707

/***********************************************************
 * Implementation: solving main problem
 ***********************************************************/
int minExtraChar(std::string s, std::vector<std::string>& dictionary)
{
    return problem_2707::solution_1(s, dictionary);
}

/***********************************************************
 * Implementation: Variations of Solution
 ***********************************************************/
int problem_2707::solution_1(std::string s, std::vector<std::string>& dictionary)
{
    int n{(int)s.length()};
    std::unordered_set<std::string> dict{dictionary.begin(), dictionary.end()};
    std::unordered_map<int, int> memo;
    std::function<int(int)> dp = [&](int start) {
        if (start == n)
            return 0;
        if (memo.count(start))
            return memo[start];
        int ans = dp(start + 1) + 1;
        for (int i{start}; i < n; ++i) {
            auto curr = s.substr(start, i - start + 1);
            if (dict.count(curr))
                ans = std::min(ans, dp(i + 1));
        }
        return memo[start] = ans;
    };
    return dp(0);
}

} // namespace leetcode
