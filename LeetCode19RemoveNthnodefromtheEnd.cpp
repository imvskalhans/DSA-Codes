/*
leetcode 19 Remove Nth node from the End
Given the head of a linked list, remove the nth node from the end of the list and return its head.

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

ListNode* removeNthFromEnd(ListNode* head, int n)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        if (n == 1)
        {
            return NULL;
        }
        else
        {
            return head;
        }
    }
    ListNode* curr = head;
    ListNode* prev = head;
    int count = 0;
    while (curr != NULL)
    {
        if (count > n)
        {
            prev = prev->next;
        }
        curr = curr->next;
        count++;
    }
    if (count == n)
    {
        head = head->next;
    }
    else
    {
        prev->next = prev->next->next;
    }
    return head;
}
/*
//my approach
class Solution {
private:
int getlength(ListNode* head)
{
    int count = 0;
    ListNode* temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = getlength(head);
        if (n == len) {
            return head->next;
        }
        ListNode* curr = head;
        ListNode* prev = NULL;
        for (int i = 0; i < len - n; i++) {
            prev = curr;
            curr = curr ->next;
        }
        if (prev != NULL) {
            prev->next = curr ->next;
        }
        delete curr;
        return head;
    }
};
*/

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
    ListNode* result = removeNthFromEnd(head, 2);
    while (result != NULL)
    {
        cout << result->val << " ";
        result = result->next;
    }
}

/*
//best approach
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *ans = head;
        ListNode *fast = ans;
        while (n)
        {
            fast = fast->next;
            n--;
        }
        if (fast == nullptr)
            return head->next;
        else
        {
            ListNode *slow = ans;
            while (fast->next != nullptr)
            {
                fast = fast->next;
                slow = slow->next;
            }
            slow->next = slow->next->next;
        }
        return ans;
    }
};
*/