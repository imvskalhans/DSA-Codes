/*
leetcode 876 Middle of the Linked List
Given a non-empty, singly linked list with head node head, return a middle node of linked list.
If there are two middle nodes, return the second middle node.
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

ListNode* middleNode(ListNode* head)
{
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
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
    ListNode* result = middleNode(head);
    while (result != NULL)
    {
        cout << result->val << " ";
        result = result->next;
    }
}

/*
//my approach
/*
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
    ListNode *middleNode(ListNode *head)
    {
        int len = getlength(head);
        ListNode *temp = head;
        for (int i = 0; i < len / 2; i++)
        {
            temp = temp->next;
        }
        head = temp;
        return head;
    }
};
*/