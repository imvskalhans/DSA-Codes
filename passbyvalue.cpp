#include<iostream>
using namespace std;
int update(int a);
int main()
{
    int a=15;
   a=update(a);
    cout<<a<<endl;
}
int update(int a){
    a-=5;
    return a;
}