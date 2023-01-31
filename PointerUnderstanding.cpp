// understanding pointers
#include<iostream>
using namespace std;
void f(int *p){
    cout<<*p;
}
int main()
{
    /*int i=10;
    cout<<i<<endl;
    cout<<&i<<endl;
   int *p=&i;
    cout<<"p "<<p<<endl;
    cout<<"&p "<<&p<<endl;
    cout<<"*p "<<*p<<endl;
   cout<<"i "<<i<<endl;
    cout<<" &p " <<&p<<endl;
    int j = 11; 
    int * q; q = & i;
     cout << "Address of the variable i is " << q << endl;
     cout << "Address of the pointer p is " << & q; 
     cout << "value of the pointer p is " << *q<<endl; 

     //new
 int firstvalue = 5, secondvalue = 15; char thirdvalue = 'a';
  //int * p1, * p2; char * p3; 
  int *p1 = & firstvalue; //p1 = address of firstvalue
   int * p2 = & secondvalue; // p2 = address of secondvalue
   char *p3 = & thirdvalue; // p3 = address of thirdvalue
     * p1 = 125; // value pointed to by p1 = 10
      //* p2 = * p1; // value pointed to by p2 = value pointed to by p1
       cout<<"&p1 "<<&p1<<endl;
       cout<<"&p1 "<<&p2<<endl;
       cout<<"p1 "<<*p1<<endl;
       cout<<"p2 "<<*p2<<endl;
       
       
       
       //*p1=687;

      // p1 = p2; // p1 = p2 (value of pointer is copied)
       p2 = p1; // p1 = p2 (value of pointer is copied)
      // * p1 = 20; // value pointed to by p1 = 20
       * p3 = 'b'; // value pointed to by p3 = ‘b ’
       cout << "firstvalue is " << *p1 << endl;
       cout << "secondvalue is " << *p2 << endl; 
 cout << "thirdvalue is " << thirdvalue << endl;
     int l=100;
   //  int *ptr=&l;
   //  cout<<"*ptr "<<*ptr<<endl;
    // cout<<"*ptr "<<ptr<<endl;
   int *qtr;
    qtr=&l;
     cout<<"*ptr "<<*qtr<<endl;
     cout<<"*ptr "<<qtr<<endl;
     qtr=&j;
     cout<<"*ptr "<<qtr<<endl;
     cout<<"*ptr "<<*qtr<<endl;
     int arr[5]={1,2,3,4,5};
     int *o=arr;
      //function in pointers*/
      int value=5;
      int *p=&value;
      f(&value);

     return 0;
     
}