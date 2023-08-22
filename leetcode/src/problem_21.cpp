/***********************************************************
 * 21. Merge Two Sorted Lists
 * You are given the heads of two sorted linked lists list1 and list2.
 * Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two
 *lists.
 *
 * Return the head of the merged linked list.
 *
 * Example 1:
 * Input: list1 = [1,2,4], list2 = [1,3,4]
 * Output: [1,1,2,3,4,4]
 *
 * Example 2:
 * Input: list1 = [], list2 = []
 * Output: []
 *
 * Example 3:
 * Input: list1 = [], list2 = [0]
 * Output: [0]
 *
 * Constraints:
 *  The number of nodes in both lists is in the range [0, 50].
 *  -100 <= Node.val <= 100
 *  Both list1 and list2 are sorted in non-decreasing order.
 ***********************************************************/

#include "leetcode.hpp"

#include <iostream>

namespace leetcode
{

/***********************************************************
 * Decleration
 ***********************************************************/
namespace problem_21
{
ListNode* solution_1(ListNode* list1, ListNode* list2);
ListNode* solution_2(ListNode* list1, ListNode* list2);
} // namespace problem_21

/***********************************************************
 * Implementation: solving main problem
 ***********************************************************/
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
{
    return problem_21::solution_2(list1, list2);
}

/***********************************************************
 * Implementation: Variations of Solution
 ***********************************************************/
ListNode* problem_21::solution_1(ListNode* list1, ListNode* list2)
{
    if (!list1)
        return list2;
    if (!list2)
        return list1;
    ListNode* head{nullptr};
    ListNode* curr{nullptr};
    ListNode* result{nullptr};
    while (list1 && list2) {
        if (list1->val <= list2->val) {
            curr = list1;
            list1 = list1->next;
            curr->next = nullptr;
        } else {
            curr = list2;
            list2 = list2->next;
            curr->next = nullptr;
        }
        if (head) {
            head->next = curr;
            curr = nullptr;
            head = head->next;
        } else {
            head = curr;
            curr = nullptr;
            result = head;
        }
    }
    if (list1)
        head->next = list1;
    if (list2)
        head->next = list2;
    return result;
}

ListNode* problem_21::solution_2(ListNode* list1, ListNode* list2)
{
    ListNode* l1{list1};
    ListNode* l2{list2};

    ListNode* res_head = new ListNode();
    ListNode* curr{res_head};

    while (l1 && l2) {        
        if (l1->val <= l2->val) {
            curr->next = l1;
            l1 = l1->next;
        } else {
            curr->next = l2;
            l2 = l2->next;
        }
        curr = curr->next;
    }
    if (l1)
        curr->next = l1;
    else
        curr->next = l2;

    curr = res_head->next;
    if (res_head)
        delete (res_head);
    return curr;
}

} // namespace leetcode
