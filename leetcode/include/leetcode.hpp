/*******************************************************************************
 * Copyright (c) 2023 by Karthik Jain <krthkj.public@gmail.com>
 * All Rights Reserved.
 * Using MIT+CC licence, refer the license file supplied with the project.
 *
 * Author : Karthik Jain <krthkj.public@gmail.com>
 * Date : 2023-06-28
 *******************************************************************************/
#ifndef LEETCODE_HPP
#define LEETCODE_HPP

#include "leetcode_ds.hpp"

#include <string>
#include <vector>

namespace leetcode
{
void printlib(void);

// Problems
bool sample_problem(void);                                       // 0
int lengthOfLongestSubstring(std::string s);                     // 3. Longest Substring Without Repeating Characters
bool isPalindrome(int num);                                      // 9. Palindrome Number
int romanToInt(std::string roman_string);                        // 13. Roman to Integer
std::string longestCommonPrefix(std::vector<std::string>& strs); // 14. Longest Common Prefix
ListNode* removeNthFromEnd(ListNode* head, int n);               // 19. Remove Nth Node From End of List
int searchInsert(std::vector<int>& nums, int target);            // 35. Search Insert Position
int mySqrt(int x);                                               // 69. Sqrt(x)
std::vector<int> twoSum(std::vector<int>& numbers, int target);  // 167. Two Sum II - Input Array Is Sorted
std::string largestNumber(std::vector<int>& nums);               // 179. Largest Number
void rotate(std::vector<int>& nums, int k);                      // 189. Rotate Array
bool containsDuplicate(std::vector<int>& nums);                  // 217. Contains Duplicate
void moveZeroes(std::vector<int>& nums);                         // 283. Move Zeroes
int lengthOfLongestSubstringKDistinct(std::string s, int k);     // 340. Longest Substring with At Most K Distinct
                                                                 //      Characters
void reverseString(std::vector<char>& s);                        // 344. Reverse String
std::string reverseWords(std::string s);                         // 557. Reverse Words in a String III
bool checkInclusion(std::string s1, std::string s2);             // 567. Permutation in String
double findMaxAverage(std::vector<int>& nums, int k);            // 643. Maximum Average Subarray I
int search(std::vector<int>& nums, int target);                  // 704. Binary Search
ListNode* middleNode(ListNode* head);                            // 876. Middle of the Linked List
std::vector<int> sortedSquares(std::vector<int>& nums);          // 977. Squares of a Sorted Array
int longestOnes(std::vector<int>& nums, int k);                  // 1004. Max Consecutive Ones III

// int firstBadVersion(int n);                                     // 278. First Bad Version

} // namespace leetcode
#endif // LEETCODE_HPP
