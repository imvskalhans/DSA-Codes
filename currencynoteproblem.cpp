#include<iostream>
using namespace std;
int main()
{
    cout<<"enter n"<<endl;
    int n,r,r1,r2, i=0;
    cin>>n;
   
    
    while(i<5){
    switch(i)
    {
        case 1:  cout<<"no of 100 rs notes are" << n/100<<" "<<endl;
               r=n%100;     
        break;
    
        case 2: cout<<"no of 50 rs notes are" <<r/50 <<" "<<endl;
        r1=r%50;
        break;
        case 3: cout<<"no of 20 rs notes are" << r1/20<<" "<<endl;
        r2=r1%20;
        //continue statement not within a loop
        break;
        case 4: cout<<"no of 1 rs notes are" << r2/1<<" "<<endl;
        break;
        default : cout<< " hume nahi pata bhaiya";
        break;
    }
    i++;
    }
}