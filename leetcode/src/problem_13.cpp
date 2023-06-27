/*
 * 13. Roman to Integer

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X
+ II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII.
Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same
principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

    I can be placed before V (5) and X (10) to make 4 and 9.
    X can be placed before L (50) and C (100) to make 40 and 90.
    C can be placed before D (500) and M (1000) to make 400 and 900.

Given a roman numeral, convert it to an integer.



Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.

Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.

Example 3:

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.



Constraints:

    1 <= s.length <= 15
    s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
    It is guaranteed that s is a valid roman numeral in the range [1, 3999].


*/

#include "leetcode.hpp"

#include <iostream>
#include <string>
#include <unordered_map>

// Decleration
namespace leetcode::problem_13
{
int solution_1(std::string s);
int solution_2(std::string s);
int solution_3(std::string s);
} // namespace leetcode::problem_13

int leetcode::romanToInt(std::string roman_string)
{
    return problem_13::solution_2(roman_string);
}

int leetcode::problem_13::solution_1(std::string s)
{
    unsigned int num{0};
    // std::cout << s << "=";
    for (auto c : s) {
        switch (c) {
        case 'I':
            num += 1;
            // std::cout << "+1";
            break;
        case 'V':
            num += 5;
            // std::cout << "+5";
            break;
        case 'X':
            num += 10;
            // std::cout << "+10";
            break;
        case 'L':
            num += 50;
            // std::cout << "+50";
            break;
        case 'C':
            num += 100;
            // std::cout << "+100";
            break;
        case 'D':
            num += 500;
            // std::cout << "+500";
            break;
        case 'M':
            num += 1000;
            // std::cout << "+1000";
            break;
        default: break;
        }
    }
    // std::cout << std::endl;
    return num;
}

int leetcode::problem_13::solution_2(std::string s)
{
    unsigned int ans{0};
    std::unordered_map<std::string, int> ri_map{{"I", 1},   {"IV", 4},   {"V", 5},   {"IX", 9},  {"X", 10},
                                                {"CL", 40}, {"L", 50},   {"XC", 90}, {"C", 100}, {"CD", 400},
                                                {"D", 500}, {"CM", 900}, {"M", 1000}};

    for (size_t i{0}; i < s.length(); ++i) {
        // check for 2 chars
        auto it = ri_map.find(s.substr(i, 2));
        // Check if the element was found.
        if (it != ri_map.end()) {
            ans += it->second;
            ++i;
        } else {
            it = ri_map.find(s.substr(i, 1));
            if (it != ri_map.end())
                ans += it->second;
            else
                std::cout << "invalid inputs" << std::endl;
        }
    }
    return ans;
}

int leetcode::problem_13::solution_3(std::string s)
{
    unsigned int ans{0};
    std::unordered_map<std::string, int> ri_map{{"I", 1},   {"V", 5},   {"X", 10},  {"L", 50},
                                                {"C", 100}, {"D", 500}, {"M", 1000}};

    s.clear();
    
    return ans;
}
