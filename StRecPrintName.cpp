#include<iostream>
using namespace std;
void nameprint(int n)
{
    if(n==5)
    {
        return;
    }
    cout<<"vishal singh"<<endl;
    n++;
    nameprint(n);
}
int main()
{
    int count=0;
    nameprint(count);
}