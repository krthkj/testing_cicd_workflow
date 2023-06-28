/***********************************************************************************************************************
 * 876. Middle of the Linked List
 *
 * Given the head of a singly linked list, return the middle node of the linked list.
 * If there are two middle nodes, return the second middle node.
 *
 * Example 1:
 * Input: head = [1,2,3,4,5]
 * Output: [3,4,5]
 * Explanation: The middle node of the list is node 3.
 *
 * Example 2:
 * Input: head = [1,2,3,4,5,6]
 * Output: [4,5,6]
 * Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
 *
 *
 * Constraints:
 * The number of nodes in the list is in the range [1, 100].
 * 1 <= Node.val <= 100
 *
 *************************************************
 * mid is nothing but half.
 * have twopointers, one moves at 1x speed, second one moves at 2x speed. when second pointer reached the end,
 * the first pointer is pointing to the middle.
 *
 */

#include "leetcode.hpp"
#include "leetcode_ds.hpp"

#include <iostream>

namespace leetcode
{

// Decleration
namespace problem_876
{
ListNode* solution_1(ListNode* head);
ListNode* solution_2(ListNode* head);
} // namespace problem_876

ListNode* middleNode(ListNode* head)
{
    return problem_876::solution_1(head);
}

ListNode* problem_876::solution_1(ListNode* head)
{
    ListNode* cur{head};
    ListNode* mid{head};
    int count{1};
    while (cur->next) {
        if (count++ % 2 == 0)
            mid = mid->next;
        cur = cur->next;
    }
    if (count % 2 == 0)
        return mid->next;
    else
        return mid;
}

ListNode* problem_876::solution_2(ListNode* head)
{
    ListNode* cur{head};
    ListNode* mid{head};
    while (cur->next) {
        mid = mid->next;
        if (nullptr == cur->next->next)
            break;
        cur = cur->next->next;
    }
    return mid;
}

} // namespace leetcode
