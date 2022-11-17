#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    switch(n)
    {
        case 1: cout<< "1 is execcuting"<<endl;
        break;
        case 2: cout<< "2 is execcuting"<<endl;
        break;
        case 3: cout<< "3 is execcuting"<<endl;
        break;//continue statement not within a loop
        case 4: cout<< "4 is execcuting"<<endl;
        break;
        default : cout<< " defsaut is executing";
    }

}