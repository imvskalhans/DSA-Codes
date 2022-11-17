#include<iostream>
using namespace std;
int factorial(int n);
int main()

{
    int n,r,r1,n1,r3,r4;
    cin>>n>>r;
    n1=factorial(n);
    r1=factorial(r);
    r3=n-r;
    r4=factorial(r3);
    cout<<"nCr ="<<n1/(r1*r4)<<endl;

}
int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;

    }
    return f;
}