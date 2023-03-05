/*
leetcode 237. Delete Node in a Linked List
Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.
Given linked list -- head = [4,5,1,9], which looks like following:
4 -> 5 -> 1 -> 9
Example 1:
Input: head = [4,5,1,9], node = 5
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

void deleteNode(ListNode* node)
{
    if (node == NULL)
    {
        return;
    }
    if (node->next == NULL)
    {
        return;
    }
    node->val = node->next->val;
    node->next = node->next->next;
}

int main()
{
    ListNode* head = new ListNode(4);
    head->next = new ListNode(5);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(9);
    deleteNode(head->next);
    ListNode* curr = head;
    while (curr != NULL)
    {
        cout << curr->val << " ";
        curr = curr->next;
    }
    return 0;
}