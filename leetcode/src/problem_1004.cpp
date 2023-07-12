/***********************************************************
 * 1004. Max Consecutive Ones III
 * Given a binary array nums and an integer k, return the maximum number
 * of consecutive 1's in the array if you can flip at most k 0's.
 *
 * Example 1:
 * Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
 * Output: 6
 * Explanation: [1,1,1,0,0,1,1,1,1,1,1]
 * Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
 *
 * Example 2:
 * Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
 * Output: 10
 * Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
 * Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
 *
 * Constraints:
 *     1 <= nums.length <= 105
 *     nums[i] is either 0 or 1.
 *     0 <= k <= nums.length
 ***********************************************************/

#include "leetcode.hpp"

#include <iostream>
#include <vector>

namespace leetcode
{
/***********************************************************
 * Decleration
 ***********************************************************/
namespace problem_1004
{
int solution_1(std::vector<int>& nums, int k);
} // namespace problem_1004

/***********************************************************
 * Implementation: solving main problem
 ***********************************************************/
int longestOnes(std::vector<int>& nums, int k)
{
    return problem_1004::solution_1(nums,k);
}

/***********************************************************
 * Implementation: Variations of Solution
 ***********************************************************/
int problem_1004::solution_1(std::vector<int>& nums, int k)
{
    uint l{0}, r{0}, n = nums.size();
    for (r = 0; r < n; ++r) {
        if (nums.at(r) == 0)
            k--;
        if (k < 0)
            k += 1 - nums.at(l++);
    }
    return r - l;
}

} // namespace leetcode
