/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start

#include <bits/stdc++.h>
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *first = l1;
        ListNode *second = l2;

        int firstNum = 0;
        int secondNum = 0;

        ListNode *resultLL = nullptr;
        ListNode *secondLL = nullptr;
        int carry = 0;

        while (first != nullptr || second != nullptr || carry != 0)
        {
            int x = (first != nullptr) ? first->val : 0;
            int y = (second != nullptr) ? second->val : 0;

            int sum = x + y + carry;
            carry=sum/10;
            int digit = sum%10;


            ListNode *newNode  = new ListNode(digit);
            if (resultLL == nullptr)
            {
                resultLL = newNode;
                secondLL = newNode;
            } else
            {
                secondLL->next = newNode;
                secondLL = newNode;
            }
            
            if(first) first = first->next;
            if(second) second = second->next;
        }
        return resultLL;
    }
};
// @lc code=end
