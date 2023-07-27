/***********************************************************
 * 7. Reverse Integer
 * Given a signed 32-bit integer x, return x with its digits reversed.
 * If reversing x causes the value to go outside the signed 32-bit
 * integer range [-231, 231 - 1], then return 0.
 *
 * Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
 *
 * Example 1:
 * Input: x = 123
 * Output: 321
 *
 * Example 2:
 * Input: x = -123
 * Output: -321
 *
 * Example 3:
 * Input: x = 120
 * Output: 21
 *
 * Constraints:
 *  -231 <= x <= 231 - 1
 ***********************************************************/

#include "leetcode.hpp"

#include <iostream>
#include <limits>

namespace leetcode
{
/***********************************************************
 * Implementation: solving main problem
 ***********************************************************/
int reverse(int x)
{
    {
        long res{0};
        while (x) {
            res *= 10;
            res += x % 10;
            x = x / 10;
        }
        if (res > std::numeric_limits<int>::max() || res < std::numeric_limits<int>::min())
            return 0;
        return (int)res;
    }
}

} // namespace leetcode
