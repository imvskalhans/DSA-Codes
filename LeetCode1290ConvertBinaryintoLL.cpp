/*
leetcode 1290. Convert Binary Number in a Linked List to Integer
Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.
Return the decimal value of the number in the linked list.
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

int getDecimalValue(ListNode* head)
{
    if (head == NULL)
    {
        return 0;
    }
    int ans = 0;
    ListNode* curr = head;
    while (curr != NULL)
    {
        ans = ans * 2 + curr->val;
        curr = curr->next;
    }
    return ans;
}

int main()
{
    ListNode* head = new ListNode(1);
    head->next = new ListNode(0);
    head->next->next = new ListNode(1);
    cout << getDecimalValue(head);
    return 0;
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
    int getDecimalValue(ListNode* head) {
        int len = getlength(head) - 1;
        int ans= 0;
        ListNode* temp = head;
        while(temp->next!=NULL)
        {
            ans = ans + (temp->val * pow(2,len--));
            temp= temp->next;
        }
        return temp->val==1 ? ans+1 : ans ;
    }
};
*/