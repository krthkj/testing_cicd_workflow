/*
 * 557. Reverse Words in a String III
 * Given a string s, reverse the order of characters in each word within
 * a sentence while still preserving whitespace
 * and initial word order.
 *
 * Example 1:
 * Input: s = "Let's take LeetCode contest"
 * Output: "s'teL ekat edoCteeL tsetnoc"
 *
 * Example 2:
 * Input: s = "God Ding"
 * Output: "doG gniD"
 *
 * Constraints:
 * 1 <= s.length <= 5 * 104
 * s contains printable ASCII characters.
 * s does not contain any leading or trailing spaces.
 * There is at least one word in s.
 * All the words in s are separated by a single space.
 *
 */

#include "leetcode.hpp"

#include <algorithm>
#include <iostream>
#include <stack>

// Decleration
namespace leetcode
{
namespace problem_557
{
void reverse(std::string& s, size_t start, size_t end);
std::string solution_1(std::string s);
std::string solution_2(std::string s);
} // namespace problem_557

std::string reverseWords(std::string s)
{
    return problem_557::solution_1(s);
}

std::string problem_557::solution_1(std::string s)
{
    if (s.length() > 0) {
        std::stack<char> st;
        std::string res{};
        for (char& c : s) {
            if (c != ' ')
                st.push(c);
            else {
                while (!st.empty()) {
                    res.push_back(st.top());
                    st.pop();
                }
                res.push_back(' ');
            }
        }
        while (!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }
        return res;
    }
    return s;
}

void problem_557::reverse(std::string& s, size_t start, size_t end)
{
    while (start < end)
        std::swap(s[start++], s[end--]);
}

std::string problem_557::solution_2(std::string s)
{
    int i{0};
    size_t spacePos{s.find(' ')};
    while (std::string::npos != spacePos) {
        reverse(s, i, spacePos - 1);
        i = spacePos + 1;
        spacePos = s.find(' ', i);
    }
    reverse(s, i, s.size() - 1);
    return s;
}
} // namespace leetcode
