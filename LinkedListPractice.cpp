/*

*/
#include<iostream>
#include<vector>
using namespace std;

class linkedlistnode{
public:
    int data ;
    linkedlistnode*next;


    // constructor creation
    linkedlistnode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(linkedlistnode* &head, int data)
{
    linkedlistnode *temp = new linkedlistnode(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(linkedlistnode* &tail , int data)
{
    linkedlistnode *temp = new linkedlistnode(data);
    tail->next = temp;
    tail = temp;
}
void PrintNode(linkedlistnode* &head)
{
    linkedlistnode *temp = head;
    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    linkedlistnode *node1 =new linkedlistnode(11);
    cout << node1->data << endl;
    cout << node1->next << endl;
    linkedlistnode *head = node1;
    linkedlistnode *tail = node1;
    insertAtHead(head, 12);
    PrintNode(head);
    for (int i = 10; i > 0;i--)
    {
        insertAtHead(head, i);
    }
    PrintNode(head);
    insertAtTail(tail, 0);
    PrintNode(head);
    for (int i = 10; i > 0; i--)
    {
        insertAtTail(tail, i);
    }
    PrintNode(head);
    return 0;
}