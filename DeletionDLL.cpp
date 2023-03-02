/*

*/
#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

void insertatposition(Node *&head, Node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    }
    Node *nodetoinsert = new Node(data);
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    else
    {
        temp->next->prev = nodetoinsert;
        nodetoinsert->next = temp->next;
        temp->next = nodetoinsert;
        nodetoinsert->prev = temp;
    }
}

void deletenode(Node* &head , int pos)
{

}

int main()
{
    Node *node1 = new Node(11);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertAtHead(head, 12);
    print(head);
    insertAtTail(tail, 10);
    print(head);
    insertatposition(head, tail, 2, 9);
    print(head);
    insertatposition(head, tail, 1, 9);
    print(head);
    insertatposition(head, tail, 4, 8);
    print(head);
    insertatposition(head, tail, 6, 18);
    print(head);
    insertatposition(head, tail, 7, 188);
    print(head);
    insertatposition(head, tail, 8, 1889);
    print(head);
    return 0;
}