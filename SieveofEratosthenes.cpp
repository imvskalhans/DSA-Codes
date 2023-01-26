#include<iostream>
#include<vector>
using namespace std;

   int countPrimes(int n) {
       /* if(n==0||n==1)
        {
            return 0;
        }
         int d=0;
       for(int j=2;j<n;j++){ int k=0;
    for(int i=1;i<=j;i++)
    {
        if(j%i==0)
        {
            k++;
        }
    }
     if(k==2)
{
    d++;

}
}
        return d;
    }*/
    //Sieve of Eratosthenes
    vector<bool> prime (n+1,true);
    int count=0;
    prime[0]=prime[1]=true;
    for(int i=2;i<n;i++)
    {
        if(prime[i])
        {
            count++;
            for(int j=2*i;j<n;j=j+i)
            {
                prime[j]=0;
            }
        }
       
    } 
    return count;
}
int main()
{
    int n; 
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"no of prime no till "<<n<<" are - "<<countPrimes(n);
}