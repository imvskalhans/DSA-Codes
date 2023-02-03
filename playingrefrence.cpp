#include<iostream>
using namespace std;
/*
int swap(int *c, int *d)
{
    cout<< " &c"<<&c<<"  &b "<<&d<<endl;
    int* temp=0;
    temp=c;
    c=d;
    d=temp;
    cout<<" after  a -"<<*c<<" b -"<<*d<<endl;

}
*/
int main()
{
    //int i=5;
    //int j=10;
    //int* a=&i;
    //int* b=&j;
   //  cout<< " &a"<<&a<<"  &b "<<&b<<endl
   // swap(a,b);
    //cout<< " &a"<<&a<<"  &b "<<&b<<endl;

   // cout<<"a "<<*a<<" b "<<*b<<endl;
   // cout<< " &a"<<&a<<"  &b "<<&b<<endl;


    int arr[4]={1,2,3,4};
   int *ptr = arr++;
   cout<<*ptr <<endl;
   int *q = ++arr;
   cout<<*q<<endl;
    //cout<<sizeof(arr)<<"  "<<sizeof(arr[0])<<"  "<<sizeof(arr[5])<<endl;
}