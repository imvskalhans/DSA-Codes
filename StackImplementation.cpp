/*
Stack Implementation using array
*/

#include <iostream>
#include<stack>
using namespace std;

class Stack{

    //properties
public:
    int *arr;
    int top;
    int size;

    //behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    //push operation
    void push(int element)
    {
        if(size-top>1)
        {
            top++;
            arr[top] = element;
        }
        else{
            cout << "stack is full" << endl;
        }
    }

    //pop operation
    void pop()
    {
        if(top==-1)
        {
            cout << "stack is empty" << endl;
        }
        else{
            top--;
        }
    }

    //peek operation
    int peek()
    {
        if(top==-1)
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }

    //empty?
    bool empty()
    {
        if(top == -1)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
};

int main()
{
    Stack s(5);
    s.push(33);
    s.push(23);
    s.push(98);
    s.push(43);
    s.push(78);
    cout << s.peek() << endl;
    s.push(100);
    cout << s.peek() << endl;

    s.pop();
    cout << s.peek() << endl;

    cout << s.empty() << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout << s.empty() << endl;
    s.pop();
    cout << s.empty() << endl;
}