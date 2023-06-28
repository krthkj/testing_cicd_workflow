/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every
element is distinct.

Example 1:

Input: nums = [1,2,3,1]
Output: true

Example 2:

Input: nums = [1,2,3,4]
Output: false

Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true


Constraints:

    1 <= nums.length <= 105
    -109 <= nums[i] <= 109

*/

#include "leetcode.hpp"

#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

// Decleration
namespace leetcode::problem_217
{
bool solution_1(std::vector<int>& nums);
bool solution_2(std::vector<int>& nums);
bool solution_3(std::vector<int>& nums);
} // namespace leetcode::problem_217

bool leetcode::containsDuplicate(std::vector<int>& nums)
{
    return problem_217::solution_2(nums);
}

bool leetcode::problem_217::solution_1(std::vector<int>& nums)
{
    if (nums.empty())
        return false;
    std::sort(nums.begin(), nums.end());
    for (const auto& n : nums)
        if (std::count(nums.begin(), nums.end(), n) > 1)
            return true;
    return false;
}

bool leetcode::problem_217::solution_2(std::vector<int>& nums)
{
    std::sort(nums.begin(), nums.end());
    for (size_t i{1}; i < nums.size(); ++i) {
        if (nums.at(i - 1) == nums.at(i))
            return true;
    }
    return false;
}

bool leetcode::problem_217::solution_3(std::vector<int>& nums)
{
    // using set and using []
    std::set<int> uniq;
    std::sort(nums.begin(), nums.end());
    for (size_t i = 0; i < nums.size(); ++i) {
        if (uniq.count(nums[i]))
            return true;
        uniq.insert(nums[i]);
    }
    return false;
}
