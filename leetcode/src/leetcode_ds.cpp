#include "leetcode_ds.hpp"

namespace leetcode
{
ListNode::ListNode()
    : val(0)
    , next(nullptr)
{
}

ListNode::ListNode(int x)
    : val(x)
    , next(nullptr)
{
}

ListNode::ListNode(int x, ListNode* next)
    : val(x)
    , next(next)
{
}
} // namespace leetcode
