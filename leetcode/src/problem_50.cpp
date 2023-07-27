/***********************************************************
 * 50. Pow(x, n)
 *
 * Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
 *
 * Example 1:
 * Input: x = 2.00000, n = 10
 * Output: 1024.00000
 *
 * Example 2:
 * Input: x = 2.10000, n = 3
 * Output: 9.26100
 *
 * Example 3:
 * Input: x = 2.00000, n = -2
 * Output: 0.25000
 * Explanation: 2-2 = 1/22 = 1/4 = 0.25
 *
 * Constraints:
 * -100.0 < x < 100.0
 * -231 <= n <= 231-1
 * n is an integer.
 * Either x is not zero or n > 0.
 * -104 <= xn <= 104
 ***********************************************************/

#include "leetcode.hpp"

#include <iostream>

namespace leetcode
{

/***********************************************************
 * Decleration
 ***********************************************************/
namespace problem_50
{
double binaryExp(double x, int n);
} // namespace problem_50

/***********************************************************
 * Implementation: solving main problem
 ***********************************************************/
double myPow(double x, int n)
{
    return problem_50::binaryExp(x, n);
}

/***********************************************************
 * Implementation: Variations of Solution
 ***********************************************************/
double problem_50::binaryExp(double x, int n)
{
    if (n == 0)
        return 1.0;
    if (n < 0)
        return 1.0 / binaryExp(x, -1 * n);
    if (n % 2 == 0)
        return binaryExp(x * x, n / 2);
    else
        return x * binaryExp(x * x, (n - 1) / 2);
}

} // namespace leetcode
