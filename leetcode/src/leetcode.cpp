/*******************************************************************************
 * Copyright (c) 2023 by Karthik Jain <krthkj.public@gmail.com>
 * All Rights Reserved.
 * Using MIT+CC licence, refer the license file supplied with the project.
 *
 * Author : Karthik Jain <krthkj.public@gmail.com>
 * Date : 2023-06-28
 *******************************************************************************/
#include "leetcode.hpp"

#include <iostream>
#include <vector>

namespace leetcode
{

void printlib(void)
{
    std::cout << "[leetcode] <func> leetcode::printlib" << std::endl;
}

std::string toString(ListNode* node)
{
    std::string output{'['};
    while (node != nullptr) {
        output = output + std::to_string(node->val) + ',';
        node = node->next;
    }
    output += ']';
    return output;
}

std::string toString(std::vector<int>& v)
{
    std::string output{'['};
    for (auto i : v)
        output = output + std::to_string(i) + ',';
    output += ']';
    return output;
}

leetcode::ListNode* toListNode(const std::vector<int>& v)
{
    leetcode::ListNode* head{nullptr};
    leetcode::ListNode* curr{nullptr};
    for (int i : v) {
        leetcode::ListNode* node = new leetcode::ListNode(i);
        if (head == nullptr)
            head = node;
        else
            curr->next = node;
        curr = node;
    }
    return head;
}

} // namespace leetcode
