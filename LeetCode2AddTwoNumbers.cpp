/*
leetcode 2. Add Two Numbers
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
*/

#include<iostream>
#include<vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode* ans = new ListNode();
    ListNode* p = ans;
    int carry = 0;
    while (l1 != nullptr || l2 != nullptr)
    {
        int sum = 0;
        if (l1 != nullptr)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != nullptr)
        {
            sum += l2->val;
            l2 = l2->next;
        }
        sum += carry;
        carry = sum / 10;
        p->next = new ListNode(sum % 10);
        p = p->next;
    }
    if (carry != 0)
    {
        p->next = new ListNode(carry);
    }
    return ans->next;
}

int main()
{
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);
    ListNode* ans = addTwoNumbers(l1, l2);
    while (ans != nullptr)
    {
        cout << ans->val << " ";
        ans = ans->next;
    }
    return 0;
}
