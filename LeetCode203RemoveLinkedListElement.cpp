/*
leetcode 203 Remove Linked List Element
Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.
*/

#include<iostream>
#include<vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* removeElements(ListNode* head, int val)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (head->next == NULL)
    {
        if (head->val == val)
        {
            return NULL;
        }
        else
        {
            return head;
        }
    }
    ListNode *curr = head->next;
    ListNode *prev = head;
    while (curr != NULL)
    {
        if (curr->val == val)
        {
            prev->next = curr->next;
        }
        else
        {
            prev = curr;
        }
        curr = curr->next;
    }
    if (head->val == val)
    {
        head = head->next;
    }
    return head;
}

int main()
{
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(6);
    ListNode* fourth = new ListNode(3);
    ListNode* fifth = new ListNode(4);
    ListNode* sixth = new ListNode(5);
    ListNode* seventh = new ListNode(6);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    ListNode* result = removeElements(head, 6);
    while (result != NULL)
    {
        cout << result->val << " ";
        result = result->next;
    }
}

/*
//my approach
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *dummy = new ListNode(-1);
        ListNode *cur = dummy;
        dummy->next = head;
        while (cur)
        {
            ListNode *next = cur->next;
            while (next and next->val == val)
                next = next->next;
            cur->next = next;
            cur = next;
        }
        return dummy->next;
    }
    //
     ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* curr = dummy;
    while (curr->next != NULL)
    {
        if (curr->next->val == val)
        {
            curr->next = curr->next->next;
        }
        else
        {
            curr = curr->next;
        }
    }
    return dummy->next;
};
*/