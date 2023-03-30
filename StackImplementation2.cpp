/*
Stack Implementaion Using Linked LIst
*/
#include<iostream>
#include<vector>
using namespace std;

class node{

    // properties
    public:
    int data;
    node *next;

    //behavior
    node(int data){
        this->data = data;
        next = NULL;
    }
};

class Stack
{
    //properties
    public:
    node* top;

    // behaviour
    Stack()
    {
        this->top = NULL;
    }

    //push operation
    void push(int data)
    {
        //allocate  temp in heap
        node *temp = new node(data);

        // check if list is full;
        if(!temp)
        {
            cout << "stack overflow" << endl;
        }
        else{
            //intializing data in temp
            temp->data = data;

            //linking top
            temp->next = top;

            // updating top
            top = temp;
        }
    }

    //is empty?
    bool isempty()
    {
        return top == NULL;
    }

    //peek
    int peek()
    {
        //check if stack is empty
        if(isempty())
        {
            cout << "stack is empty" << endl;
        }
        else{
            return top->data;
        }
    }

    //pop operation
    void pop()
    {
        node *temp;

        //check if stack is empty
        if(isempty())
        {
            cout << "stack underflow" << endl;
        }
        else{
            //store top
            temp = top;

            //update top
            top = top->next;

            //free top
            free(temp);
        }
    }

    void display()
    {
        node *temp;

        // Check for stack underflow
        if (top == NULL)
        {
            cout << "\nStack Underflow";
            exit(1);
        }
        else
        {
            temp = top;
            while (temp != NULL)
            {

                // Print node data
                cout << temp->data;

                // Assign temp link to temp
                temp = temp->next;
                if (temp != NULL)
                    cout << " -> ";
            }
        }
    }
};

int main()
{
    // Creating a stack
    Stack s;

    // Push the elements of stack
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);

    // Display stack elements
    s.display();

    // Print top element of stack
    cout << "\nTop element is " << s.peek() << endl;

    // Delete top elements of stack
    s.pop();
    s.pop();

    // Display stack elements
    s.display();

    // Print top element of stack
    cout << "\nTop element is " << s.peek() << endl;

    return 0;
}