#ifndef LEETCODE_HPP
#define LEETCODE_HPP

#include <string>
#include <vector>

namespace leetcode
{
void printlib(void);

// Problems
bool sample_problem(int x);                     // problem 0
bool isPalindrome(int num);                     // problem 9
int romanToInt(std::string roman_string);       // problem 13
bool containsDuplicate(std::vector<int>& nums); // problem 217

} // namespace leetcode
#endif // LEETCODE_HPP
