/*
LeetCode82. Remove Duplicates from Sorted List II
Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.
For example,
Given 1->2->3->3->4->4->5, return 1->2->5.
Given 1->1->1->2->3, return 2->3.

*/

#include<iostream>
#include<vector>
#include<algorithm>
#include <iomanip>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* deleteDuplicates(ListNode* head) {
    if(head==NULL || head->next==NULL)
        return head;
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* pre = dummy;
    ListNode* cur = head;
    while(cur!=NULL){
        while(cur->next!=NULL && cur->val==cur->next->val){
            cur = cur->next;
        }
        if(pre->next==cur){
            pre = pre->next;
        }
        else{
            pre->next = cur->next;
        }
        cur = cur->next;
    }
    return dummy->next;
    
}

int main() 
{
    ListNode* head = new ListNode(1);
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(1);
    ListNode* node3 = new ListNode(2);
    ListNode* node4 = new ListNode(3);
    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    ListNode* result = deleteDuplicates(head);
    while(result!=NULL){
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;
}