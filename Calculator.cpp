#include<iostream>
using namespace std;
int main()
{
    cout<<"Calculator"<<endl;
    int a,b;
    char ch;
    cin>>a;
    cin>>ch;
    cin>>b;
    switch(ch)
    {
        case '+': cout<<a+b<<endl;
        break;
        case '-': cout<<a-b<<endl;
        break;
        case '*': cout<<a*b<<endl;
        break;//continue statement not within a loop
        case '/': cout<<a/b<<endl;
        break;
        default : cout<< " hume nahi pata bhaiya";
    }

}