/*
 * 9. Palindrome Number
 * Given an integer x, return true if x is a palindrome, and false otherwise.
 *
 * Example 1:
 *
   Input: x = 121
    Output: true
    Explanation: 121 reads as 121 from left to right and from right to left.

Example 2:

    Input: x = -121
    Output: false
    Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a
palindrome.

Example 3:

    Input: x = 10
    Output: false
    Explanation: Reads 01 from right to left. Therefore it is not a palindrome.



Constraints:

    -231 <= x <= 231 - 1

Follow up: Could you solve it without converting the integer to a string?

*/

#include "leetcode.hpp"

namespace leetcode
{
/***********************************************************
 * Decleration
 ***********************************************************/
namespace problem_9
{
bool solution_1(int x);
}

/***********************************************************
 * Implementation: solving main problem
 ***********************************************************/
bool isPalindrome(int nums)
{
    return problem_9::solution_1(nums);
}

/***********************************************************
 * Implementation: Variations of Solution
 ***********************************************************/
bool problem_9::solution_1(int x)
{
    if (x < 0)
        return false;

    unsigned int val = x;
    unsigned int rev = 0;
    while (val != 0) {
        rev *= 10;
        rev += val % 10;
        val = val / 10;
    }
    return ((int)rev == x) ? true : false;
}
} // namespace leetcode
