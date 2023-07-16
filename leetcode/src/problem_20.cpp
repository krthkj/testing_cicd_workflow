/***********************************************************
20. Valid Parentheses
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

    Open brackets must be closed by the same type of brackets.
    Open brackets must be closed in the correct order.
    Every close bracket has a corresponding open bracket of the same type.



Example 1:

Input: s = "()"
Output: true

Example 2:

Input: s = "()[]{}"
Output: true

Example 3:

Input: s = "(]"
Output: false



Constraints:

    1 <= s.length <= 104
    s consists of parentheses only '()[]{}'.

 ***********************************************************/

#include "leetcode.hpp"

#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>

namespace leetcode
{

/***********************************************************
 * Decleration
 ***********************************************************/
namespace problem_20
{
bool solution_1(std::string& s); // Fast & least runtime mem
bool solution_2(std::string& s); // Fast, slightly more runtime mem than solution_1
bool solution_3(std::string& s); // Fast, slightly more runtime mem than solution_2
} // namespace problem_20

/***********************************************************
 * Implementation: solving main problem
 ***********************************************************/
bool isValid(std::string s)
{
    return problem_20::solution_3(s);
}

/***********************************************************
 * Implementation: Variations of Solution
 ***********************************************************/
bool problem_20::solution_1(std::string& s)
{
    size_t n = s.size();
    bool retVal{false};

    if (n > 1 && n % 2 == 0) {
        std::stack<char> buff;
        for (auto c : s) {
            if (buff.empty())
                buff.push(c);
            else {
                switch (buff.top()) {
                case '(':
                    if (c == ')')
                        buff.pop();
                    else
                        buff.push(c);
                    break;
                case '[':
                    if (c == ']')
                        buff.pop();
                    else
                        buff.push(c);
                    break;
                case '{':
                    if (c == '}')
                        buff.pop();
                    else
                        buff.push(c);
                    break;
                default: break;
                }
            }
        }
        if (buff.empty())
            retVal = true;
    }
    return retVal;
}

bool problem_20::solution_2(std::string& s)
{
    size_t n = s.size();
    bool retVal{false};
    std::unordered_map<char, char> par_pair{{'}', '{'}, {']', '['}, {')', '('}};
    if (n > 1 && n % 2 == 0) {
        std::stack<char> buff;
        for (auto c : s) {
            if (buff.empty())
                buff.push(c);
            else {
                if (buff.top() == par_pair[c])
                    buff.pop();
                else
                    buff.push(c);
            }
        }
        if (buff.empty())
            retVal = true;
    }
    return retVal;
}

bool problem_20::solution_3(std::string& s)
{
    size_t n = s.size();
    bool retVal{false};
    std::unordered_map<char, char> par_pair{{'}', '{'}, {']', '['}, {')', '('}};
    if (n > 1 && n % 2 == 0) {
        std::stack<char> buff;
        for (auto c : s) {
            if (!buff.empty() && buff.top() == par_pair[c])
                buff.pop();
            else
                buff.push(c);
        }
        if (buff.empty())
            retVal = true;
    }
    return retVal;
}

} // namespace leetcode
