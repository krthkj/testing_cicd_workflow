/***********************************************************
 * 643. Maximum Average Subarray I
 *
 * You are given an integer array nums consisting of n elements,
 * and an integer k.
 *
 * Find a contiguous subarray whose length is equal to k that
 * has the maximum average value and return this value. Any
 * answer with a calculation error less than 10-5 will be
 * accepted.
 *
 *
 * Example 1:
 *
 * Input: nums = [1,12,-5,-6,50,3], k = 4
 * Output: 12.75000
 * Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
 *
 * Example 2:
 *
 * Input: nums = [5], k = 1
 * Output: 5.00000
 *
 * Constraints:
 *     n == nums.length
 *     1 <= k <= n <= 105
 *     -104 <= nums[i] <= 104
 ***********************************************************/

#include "leetcode.hpp"

#include <iostream>
#include <numeric>
#include <vector>

namespace leetcode
{

/***********************************************************
 * Decleration
 ***********************************************************/
namespace problem_643
{
double solution_1(std::vector<int>& nums, int k);
double solution_2(std::vector<int>& nums, int k);
} // namespace problem_643

/***********************************************************
 * Implementation: solving main problem
 ***********************************************************/
double findMaxAverage(std::vector<int>& nums, int k)
{
    return problem_643::solution_2(nums, k);
}

/***********************************************************
 * Implementation: Variations of Solution
 ***********************************************************/
double problem_643::solution_1(std::vector<int>& nums, int k)
{
    double sum{0};
    for (int i{0}; i < k; ++i)
        sum += nums.at(i);
    double res = sum;
    for (size_t i = k; i < nums.size(); ++i) {
        sum += nums.at(i) - nums.at(i - k);
        res = std::max(res, sum);
    }
    return res / k;
}

double problem_643::solution_2(std::vector<int>& nums, int k)
{
    if (nums.empty() || k > (int)nums.size())
        return 0;
    int sum = std::accumulate(nums.begin(), nums.begin() + k, 0);
    int res = sum;
    for (size_t i = k; i < nums.size(); ++i) {
        sum += nums.at(i) - nums.at(i - k);
        res = std::max(res, sum);
    }
    return (double)res / k;
}
} // namespace leetcode
