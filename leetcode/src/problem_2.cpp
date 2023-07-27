/***********************************************************
 * 2. Add Two Numbers
 *
 * You are given two non-empty linked lists representing two
 * non-negative integers. The digits are stored in reverse
 * order, and each of their nodes contains a single digit.
 * Add the two numbers and return the sum as a linked list.
 *
 * You may assume the two numbers do not contain any leading
 * zero, except the number 0 itself.
 *
 * Example 1:
 * Input: l1 = [2,4,3], l2 = [5,6,4]
 * Output: [7,0,8]
 * Explanation: 342 + 465 = 807.
 *
 * Example 2:
 * Input: l1 = [0], l2 = [0]
 * Output: [0]
 *
 * Example 3:
 * Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
 * Output: [8,9,9,9,0,0,0,1]
 *
 * Constraints:
 *  The number of nodes in each linked list is in the range [1, 100].
 *  0 <= Node.val <= 9
 *  It is guaranteed that the list represents a number that does not have leading zeros.
 ***********************************************************/

#include "leetcode.hpp"
#include "leetcode_ds.hpp"

#include <iostream>

namespace leetcode
{

/***********************************************************
 * Decleration
 ***********************************************************/
namespace problem_2
{
ListNode* solution_1(ListNode* l1, ListNode* l2);
ListNode* solution_2(ListNode* l1, ListNode* l2);
} // namespace problem_2

/***********************************************************
 * Implementation: solving main problem
 ***********************************************************/
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
    return problem_2::solution_2(l1, l2);
}

/***********************************************************
 * Implementation: Variations of Solution
 ***********************************************************/
ListNode* problem_2::solution_1(ListNode* l1, ListNode* l2)
{
    ListNode* curr1{l1};
    ListNode* curr2{l2};
    ListNode* prev1{nullptr};
    ListNode* prev2{nullptr};

    int val{0};
    int overFlow{0};
    while (curr1 && curr2) {
        val = curr1->val + curr2->val + overFlow;
        curr1->val = val % 10;
        overFlow = val / 10;
        prev1 = curr1;
        prev2 = curr2;
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    if (curr2) {
        std::swap(prev1->next, prev2->next);
        curr1 = prev1->next;
    }
    while (curr1) {
        val = curr1->val + overFlow;
        curr1->val = val % 10;
        overFlow = val / 10;
        prev1 = curr1;
        curr1 = curr1->next;
    }
    if (overFlow)
        prev1->next = new ListNode(overFlow);

    return l1;
}

ListNode* problem_2::solution_2(ListNode* l1, ListNode* l2)
{
    ListNode* res = nullptr;
    ListNode* curr = nullptr;
    // both list had value and add equal length
    while (l1 != nullptr || l2 != nullptr) {
        if (res) {
            if (curr->next == nullptr)
                curr->next = new ListNode(0);
            curr = curr->next;
        } else { // first time
            res = new ListNode(0);
            curr = res;
        }
        if (l1) {
            curr->val += l1->val;
            l1 = l1->next;
        }
        if (l2) {
            curr->val += l2->val;
            l2 = l2->next;
        }
        if (curr->val > 9) {
            if (curr->val / 10 > 0)
                curr->next = new ListNode(curr->val / 10);
            curr->val = curr->val % 10;
        }
    }
    return res;
}
} // namespace leetcode
