/***********************************************************
 * 1. Two Sum
 *
 * Given an array of integers nums and an integer target,
 * return indices of the two numbers such that they add up to target.
 *
 * You may assume that each input would have exactly one solution,
 * and you may not use the same element twice.
 *
 * You can return the answer in any order.
 *
 * Example 1:
 *  Input: nums = [2,7,11,15], target = 9
 *  Output: [0,1]
 *  Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
 *
 * Example 2:
 *  Input: nums = [3,2,4], target = 6
 *  Output: [1,2]
 *
 * Example 3:
 *  Input: nums = [3,3], target = 6
 *  Output: [0,1]
 *
 * Constraints:
 *  2 <= nums.length <= 104
 *  -109 <= nums[i] <= 109
 *  -109 <= target <= 109
 *  Only one valid answer exists.
 *
 * Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
 ***********************************************************/

#include "leetcode.hpp"

#include <iostream>
#include <unordered_map>
#include <vector>

namespace leetcode
{

/***********************************************************
 * Decleration
 ***********************************************************/
namespace problem_1
{
std::vector<int> solution_bruteForce(std::vector<int>& nums, int target);
std::vector<int> solution_onePassHash(std::vector<int>& nums, int target); // output values reversed, but still valid
std::vector<int> solution_twoPassHash(std::vector<int>& nums, int target);
} // namespace problem_1

/***********************************************************
 * Implementation: solving main problem
 ***********************************************************/
std::vector<int> twoSum(std::vector<int>& nums, int target)
{
    return problem_1::solution_twoPassHash(nums, target);
}

/***********************************************************
 * Implementation: Variations of Solution
 ***********************************************************/
std::vector<int> problem_1::solution_bruteForce(std::vector<int>& nums, int target)
{
    int n{(int)nums.size()};
    for (int i{0}; i < n - 1; ++i)
        for (int j{i + 1}; j < n; ++j)
            if (nums.at(i) + nums.at(j) == target)
                return std::vector<int>{i, j};
    return std::vector<int>{0, 0};
}

std::vector<int> problem_1::solution_onePassHash(std::vector<int>& nums, int target)
{
    std::unordered_map<int, int> mp;
    int n{(int)nums.size()};

    for (int i{0}; i < n; ++i) {
        auto itr = mp.find(target - nums.at(i));
        if (itr != mp.end())
            return std::vector<int>{i, itr->second};
        else
            mp[nums.at(i)] = i;
    }
    return std::vector<int>{0, 0};
}

std::vector<int> problem_1::solution_twoPassHash(std::vector<int>& nums, int target)
{
    std::unordered_map<int, int> mp;
    int n{(int)nums.size()};

    // pass one - prepare the map
    for (int i{0}; i < n; ++i)
        mp[nums.at(i)] = i;

    // pass two - identify difference
    for (int i{0}; i < n; ++i) {
        auto itr = mp.find(target - nums.at(i));
        if (itr != mp.end() && itr->second != i)
            return std::vector<int>{i, itr->second};
    }

    return std::vector<int>{0, 0};
}

} // namespace leetcode
