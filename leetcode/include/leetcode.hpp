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

/**
 * @brief The problems are grouped based on the type of problem. In order to learn and master them all,
 * one needs to follow a pattern/roadmap. This will help solidify the logic and algoritms.
 */

namespace leetcode
{
void printlib(void);

/**
 * @brief Array & Hashing related function definitions
 * @depends None
 */
std::vector<int> twoSum(std::vector<int>& nums, int target);                         // 1. Two Sum
bool isValidSudoku(std::vector<std::vector<char>>& board);                           // 36. Valid Sudoku
std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs); // 49. Group Anagrams
int longestConsecutive(std::vector<int>& nums);               // 128. Longest Consecutive Sequence
bool containsDuplicate(std::vector<int>& nums);               // 217. Contains Duplicate
std::vector<int> productExceptSelf(std::vector<int>& nums);   // 238. Product of Array Except self
bool isAnagram(std::string s, std::string t);                 // 242. Valid Anagram
std::string encode(std::vector<std::string>& strs);           // 271. Encode and Decode Strings
std::vector<std::string> decode(std::string s);               // 271. Encode and Decode Strings
std::vector<int> topKFrequent(std::vector<int>& nums, int k); // 347. Top K Frequent Elements

/**
 * @brief Two Pointers related function definitions
 * @depends Array & Hashing
 */
int maxArea(std::vector<int>& height);                            // 11. Container With Most Water
std::vector<std::vector<int>> threeSum(std::vector<int>& nums);   // 15. 3Sum
int trap(std::vector<int>& height);                               // 42. Trapping Rain Water
bool isPalindrome(std::string s);                                 // 125. Valid Palindrome
std::vector<int> twoSum_1(std::vector<int>& numbers, int target); // 167. Two Sum II - Input Array Is Sorted

/**
 * @brief Stack related function definitions
 * @depends Array & Hashing
 */

/**
 * @brief Binary Search related function definitions
 * @depends Two Pointers
 */
int searchInsert(std::vector<int>& nums, int target);    // 35. Search Insert Position
int minSpeedOnTime(std::vector<int>& dist, double hour); // 1870. Minimum Speed to Arrive on Time

/**
 * @brief Sliding Window related function definitions
 * @depends Two Pointers
 */

/**
 * @brief Linked List related function definitions
 * @depends Two Pointers
 */
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2); // 21. Merge Two Sorted Lists

/**
 * @brief Trees related function definitions
 * @depends Binary Search, Linked List
 */

/**
 * @brief Tries related function definitions
 * @depends Trees
 */

/**
 * @brief Heap/Priority Queue related function definitions
 * @depends Trees
 */

/**
 * @brief Backtracking related function definitions
 * @depends Trees
 */

/**
 * @brief Intervals related function definitions
 * @depends Heap/Priority Queue
 */

/**
 * @brief Greedy related function definitions
 * @depends Heap/Priority Queue
 */

/**
 * @brief Graphs related function definitions
 * @depends Backtracking
 */

/**
 * @brief 1D Dynamic Programming related function definitions
 * @depends Backtracking
 */

/**
 * @brief Advanced Graphs related function definitions
 * @depends Heap/Priority Queue, Graphs
 */

/**
 * @brief 2D Dynamic Programming related function definitions
 * @depends 1D Dynamic Programming, Graphs
 */

/**
 * @brief Bit Manipulation related function definitions
 * @depends 1D Dynamic Programming
 */

/**
 * @brief Math & Geometry related function definitions
 * @depends Graphs, Bit Manipulation
 */
double myPow(double x, int n); // 50. Pow(x, n)

/**
 * @brief Assorted function definitions
 */
bool sample_problem(void);                                       // 0
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);             // 2. Add Two Numbers
int reverse(int x);                                              // 7. Reverse Integer
int lengthOfLongestSubstring(std::string s);                     // 3. Longest Substring Without Repeating Characters
bool isPalindrome(int num);                                      // 9. Palindrome Number
int romanToInt(std::string roman_string);                        // 13. Roman to Integer
std::string longestCommonPrefix(std::vector<std::string>& strs); // 14. Longest Common Prefix
ListNode* removeNthFromEnd(ListNode* head, int n);               // 19. Remove Nth Node From End of List
bool isValid(std::string s);                                     // 20. Valid Parentheses
int mySqrt(int x);                                               // 69. Sqrt(x)
std::string convertToTitle(int columnNumber);                    // 168. Excel Sheet Column Title
std::string largestNumber(std::vector<int>& nums);               // 179. Largest Number
void rotate(std::vector<int>& nums, int k);                      // 189. Rotate Array
void moveZeroes(std::vector<int>& nums);                         // 283. Move Zeroes
int lengthOfLongestSubstringKDistinct(std::string s, int k);     // 340. Longest Substring with At Most K Distinct
                                                                 //      Characters
void reverseString(std::vector<char>& s);                        // 344. Reverse String
std::string reverseWords(std::string s);                         // 557. Reverse Words in a String III
bool checkInclusion(std::string s1, std::string s2);             // 567. Permutation in String
double findMaxAverage(std::vector<int>& nums, int k);            // 643. Maximum Average Subarray I
int search(std::vector<int>& nums, int target);                  // 704. Binary Search
ListNode* middleNode(ListNode* head);                            // 876. Middle of the Linked List
int numUniqueEmails(std::vector<std::string>& emails);           // 929. Unique Email Addresses
std::vector<int> sortedSquares(std::vector<int>& nums);          // 977. Squares of a Sorted Array
int longestOnes(std::vector<int>& nums, int k);                  // 1004. Max Consecutive Ones III
int sumOfSquares(std::vector<int>& nums);                        // 2778. Sum of Squares of Special Elements
int maximumBeauty(std::vector<int>& nums, int k); // 2779. Maximum Beauty of an Array After Applying Operation

// int firstBadVersion(int n);                                     // 278. First Bad Version

/**
 * @brief Utility functions
 */
std::string toString(std::vector<int>& v);                 // convert vector to string
std::string toString(ListNode* node);                      // convert List to string
leetcode::ListNode* toListNode(const std::vector<int>& v); // convert vector to ListNode
} // namespace leetcode
#endif // LEETCODE_HPP
