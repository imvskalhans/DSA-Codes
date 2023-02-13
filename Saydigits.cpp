// use recursion  to solve 10000000
//
#include<iostream>
using namespace std;
void map(int n)
{
    switch (n)
    {
   
    case 0 : cout<<"zero  "; break;
     case 1 : cout<<"one  "; break;
      case 2 : cout<<"two  ";break;
       case 3 : cout<<"three  ";break;
        case 4 : cout<<"four  ";break;
         case 5 : cout<<"five  ";break;
          case 6 : cout<<"six  ";break;
           case 7 : cout<<"seven  ";break;
            case 8 : cout<<"eight  ";break;
             case 9 : cout<<"nine  ";break;
}
}



int main()
{
    int n;
    int rev=0;
    cin>>n;
     
    
    while(n>0){
        if(n%10==0)
    {
        map(n%10);
    }
    rev =rev*10+n%10;
    n=n/10;
    }
   
    while(rev>0)
    {
        map(rev%10);
        rev = rev/10;
    }
    
}