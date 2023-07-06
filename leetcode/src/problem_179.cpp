/***********************************************************
179. Largest Number

Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.
Since the result may be very large, so you need to return a string instead of an integer.

Example 1:

Input: nums = [10,2]
Output: "210"

Example 2:

Input: nums = [3,30,34,5,9]
Output: "9534330"

Constraints:

    1 <= nums.length <= 100
    0 <= nums[i] <= 109


 ***********************************************************/

#include "leetcode.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

namespace leetcode
{

/***********************************************************
 * Decleration
 ***********************************************************/
namespace problem_179
{
bool compare(int lhs, int rhs);
std::string solution_1(std::vector<int>& nums);
} // namespace problem_179

/***********************************************************
 * Implementation: solving main problem
 ***********************************************************/
std::string largestNumber(std::vector<int>& nums)
{
    return problem_179::solution_1(nums);
}

/***********************************************************
 * Implementation: Variations of Solution
 ***********************************************************/
bool problem_179::compare(int lhs, int rhs)
{
    return std::to_string(lhs) + std::to_string(rhs) > std::to_string(rhs) + std::to_string(lhs);
}

std::string problem_179::solution_1(std::vector<int>& nums)
{
    std::sort(std::begin(nums), std::end(nums), problem_179::compare);
    std::string res;
    for (size_t i{0}; i < nums.size(); ++i)
        res += std::to_string(nums.at(i));
    if (res.size() > 1 && res.at(0) == '0')
        res = "0";
    return res;
}

} // namespace leetcode
