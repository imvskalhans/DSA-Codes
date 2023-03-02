/*

*/
#include<iostream>
using namespace std;

class Lnode {
    public:
        int data;
        Lnode *next;
//constructor
    Lnode ( int data)
    {
        this-> data = data;
        this->next = NULL;
    }
}

int main()
{
    Lnode* node1 = new Lnode(11);
    Lnode* head = node1;
    return 0;
}