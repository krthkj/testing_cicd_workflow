/***********************************************************
168. Excel Sheet Column Title
Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

For example:
A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28
...

Example 1:
Input: columnNumber = 1
Output: "A"

Example 2:
Input: columnNumber = 28
Output: "AB"

Example 3:
Input: columnNumber = 701
Output: "ZY"

Constraints:
    1 <= columnNumber <= 231 - 1
 ***********************************************************/

// convert base 10 to base 26,
// base 26 is english characters

#include "leetcode.hpp"

#include <algorithm>
#include <iostream>
#include <string>

namespace leetcode
{

/***********************************************************
 * Decleration
 ***********************************************************/
namespace problem_168
{
std::string solution_1(int columnNumber);
std::string solution_2(int columnNumber);
} // namespace problem_168

/***********************************************************
 * Implementation: solving main problem
 ***********************************************************/
std::string convertToTitle(int columnNumber)
{
    return problem_168::solution_1(columnNumber);
}

/***********************************************************
 * Implementation: Variations of Solution
 ***********************************************************/
std::string problem_168::solution_1(int columnNumber)
{
    std::string result;
    while (columnNumber > 0) {
        result = char(--columnNumber % 26 + 'A') + result;
        columnNumber /= 26;
    }
    return result;
}

std::string problem_168::solution_2(int columnNumber)
{
    // convert base 10 to base 26,
    // base 26 is english characters
    std::string result;
    while (columnNumber > 0) {
        result += char('A' + --columnNumber % 26);
        columnNumber /= 26;
    }
    std::reverse(result.begin(), result.end());
    return result;
}

} // namespace leetcode
