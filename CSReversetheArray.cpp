#include<iostream>
using namespace std;

//int reverse(int arr[], int s, int m)


int main()
{
    int m,size=12, s=12;
    cout<<"enter m"<<endl;
    cin>>m;
    int arr[100]={0,2,3,4,5,2,0,1,6,10,-1,-7};
   // int search =reverse(arr,7, m);
    cout<<"reverse =" <<endl;
     int i=0;
   
    while(i<s)
    {

    
    if( i<=m)
    {
            cout<< " " << arr[i];
    }
    else{
        cout<<" "<<arr[size-1];
        size--;
    }
   i++;
    
}
 }