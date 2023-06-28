/***********************************************************************************************************************
 * 278. First Bad Version
 *
 * You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of
 * your product fails the quality check. Since each version is developed based on the previous version, all the versions
 * after a bad version are also bad.
 *
 * Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following
 * ones to be bad.
 *
 * You are given an API bool isBadVersion(version) which returns whether version is bad. Implement a function to find
 * the first bad version. You should minimize the number of calls to the API.
 *
 * Example 1:
 * Input: n = 5, bad = 4
 * Output: 4
 * Explanation:
 * call isBadVersion(3) -> false
 * call isBadVersion(5) -> true
 * call isBadVersion(4) -> true
 * Then 4 is the first bad version.
 *
 * Example 2:
 * Input: n = 1, bad = 1
 * Output: 1
 *
 * Constraints:
 * 1 <= bad <= n <= 231 - 1
 ***********************************************************************************************************************
 * [G,G,G,G,G, G,G, B, B,B]
 * [G,G,G,G,G][G,G, B, B,B]
 *            [G,G, B][B,B]
 *            [G,G, B]
 *            [G,G][B]
 *                 [B]
 *
 ***********************************************************************************************************************
 */
/*
#include "leetcode.hpp"

#include <iostream>
#include <vector>

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

namespace leetcode
{
// Decleration
int firstBadVersion(int n);

namespace problem_278
{
std::vector<char> version_list; // {'G','G','G','G','G','B','B','B'}
bool isBadVersion(int index);
int solution_1(int n);
} // namespace problem_278

int firstBadVersion(int n)
{
    return problem_278::solution_1(n);
}

int problem_278::solution_1(int n)
{
    int left{1}, right{n}, mid{0};
    while (left < right) {
        mid = left + (right - left) / 2;
        if (isBadVersion(mid))
            right = mid;
        else
            left = mid + 1;
    }
    return left;
}

} // namespace leetcode
*/
