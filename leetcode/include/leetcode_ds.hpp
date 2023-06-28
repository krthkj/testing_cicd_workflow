#ifndef LEETCODE_DS_HPP
#define LEETCODE_DS_HPP

#include <vector>

namespace leetcode
{

/**
 * @class ListNode
 * @brief Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode* next;

    ListNode()
        : val(0)
        , next(nullptr)
    {
    }

    ListNode(int x)
        : val(x)
        , next(nullptr)
    {
    }

    ListNode(int x, ListNode* next)
        : val(x)
        , next(next)
    {
    }
};

} // namespace leetcode
#endif // LEETCODE_DS_HPP
