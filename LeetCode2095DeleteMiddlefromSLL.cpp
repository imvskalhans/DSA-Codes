/*
leetcode 2095. Delete Middle from SLL
Given a singly linked list, delete the middle node of the linked list.
If there are two middle nodes, delete the second middle node.

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

ListNode* deleteMiddle(ListNode* head)
{
    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* prev = NULL;
    while (fast != NULL && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = slow->next;
    return head;
}
int main()
{
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);
    ListNode* fourth = new ListNode(4);
    ListNode* fifth = new ListNode(5);
    ListNode* sixth = new ListNode(6);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    ListNode* result = deleteMiddle(head);
    while (result != NULL)
    {
        cout << result->val << " ";
        result = result->next;
    }
}
/*
//my approach
/**
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
private:
    int getlength(ListNode *&head)
    {
        ListNode *temp = head;
        long long int count = 1;
        while (temp->next != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

public:
    ListNode *deleteMiddle(ListNode *head)
    {
        if (head->next == NULL)
        {
            return NULL;
        }
        if (head->next->next == NULL)
        {
            head->next = NULL;
            return head;
        }
        int len = getlength(head);
        ListNode *temp = head;
        for (int i = 0; i < (len / 2) - 1; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};
*/
