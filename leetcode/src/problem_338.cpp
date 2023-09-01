/***********************************************************
 * 338. Counting Bits
 *
 * Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n),
 * ans[i] is the number of 1's in the binary representation of i.
 *
 * Example 1:
 * Input: n = 2
 * Output: [0,1,1]
 * Explanation:
 * 0 --> 0
 * 1 --> 1
 * 2 --> 10
 *
 * Example 2:
 * Input: n = 5
 * Output: [0,1,1,2,1,2]
 * Explanation:
 * 0 --> 0
 * 1 --> 1
 * 2 --> 10
 * 3 --> 11
 * 4 --> 100
 * 5 --> 101
 *
 * Constraints:
 * - 0 <= n <= 105
 *
 * Follow up:
 * - It is very easy to come up with a solution with a runtime of O(n log n). Can you do it in
 *   linear time O(n) and possibly in a single pass?
 * - Can you do it without using any built-in function (i.e., like __builtin_popcount in C++)?
 ***********************************************************/

#include "leetcode.hpp"

#include <iostream>
#include <vector>

namespace leetcode
{

/***********************************************************
 * Decleration
 ***********************************************************/
namespace problem_338
{
std::vector<int> solution_1(int n);
std::vector<int> solution_2(int n);
std::vector<int> solution_3(int n);
std::vector<int> solution_4(int n);
} // namespace problem_338

/***********************************************************
 * Implementation: solving main problem
 ***********************************************************/
std::vector<int> countBits(int n)
{
    return problem_338::solution_1(n);
}

/***********************************************************
 * Implementation: Variations of Solution
 ***********************************************************/
std::vector<int> problem_338::solution_1(int n)
{
    std::vector<int> ans(n + 1, 0);
    for (int i{1}; i <= n; ++i) {
        // f(x) = f(x/2) + (x mod 2)
        ans[i] = ans[i >> 1] + (i & 1);
    }
    return ans;
}

std::vector<int> problem_338::solution_2(int n)
{
    std::vector<int> ans(n + 1, 0);
    for (int i{1}; i <= n; ++i) {
        // f(x) = f(x & (x-1)) + 1
        ans[i] = ans[i & (i - 1)] + 1;
    }
    return ans;
}

} // namespace leetcode
