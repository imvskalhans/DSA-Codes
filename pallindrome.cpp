      #include<iostream>
      using namespace std;
      int main()
      {

      int x;
      cin>>x;

        int d ,n, ans=0;
        n=x;
        if(n<0)
        {
            cout<<false;
        }

        while (n>0)
        {
            d=n%10;
            ans = ans*10+d;
            n=n/10;
        }
        if(ans==x)
        {
            cout<<"pallindrome";
        }
        else
        {cout<<"not a pallindrome";}
      } 