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
bool sample_problem(void);                                      // problem 0
int lengthOfLongestSubstring(std::string s);                    // problem 3
bool isPalindrome(int num);                                     // problem 9
int romanToInt(std::string roman_string);                       // problem 13
ListNode* removeNthFromEnd(ListNode* head, int n);              // problem 19
int searchInsert(std::vector<int>& nums, int target);           // problem 35
int mySqrt(int x);                                              // problem 69
std::vector<int> twoSum(std::vector<int>& numbers, int target); // problem 167
std::string largestNumber(std::vector<int>& nums);              // problem 179
void rotate(std::vector<int>& nums, int k);                     // problem 189
bool containsDuplicate(std::vector<int>& nums);                 // problem 217
void moveZeroes(std::vector<int>& nums);                        // problem 283
void reverseString(std::vector<char>& s);                       // problem 344
std::string reverseWords(std::string s);                        // problem 557
bool checkInclusion(std::string s1, std::string s2);            // problem 567
double findMaxAverage(std::vector<int>& nums, int k);           // problem 643
int search(std::vector<int>& nums, int target);                 // problem 704
ListNode* middleNode(ListNode* head);                           // problem 876
std::vector<int> sortedSquares(std::vector<int>& nums);         // problem 977

// int firstBadVersion(int n);                                     // problem 278

} // namespace leetcode
#endif // LEETCODE_HPP
