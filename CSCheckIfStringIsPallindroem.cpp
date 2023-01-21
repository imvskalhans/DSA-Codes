#include<iostream>
#include<vector>
using namespace std;
vector<char> checkvalid(char ch [],int len)
{
   vector<char> st;
    for(int i=0;ch[i]!='\0';i++)
    {
        if((ch[i]>=32&&ch[i]<=47)||(ch[i]>=58&&ch[i]<=64)||(ch[i]>=123&&ch[i]<=127))
        {
          
        }
        else{
        st.push_back(ch[i]);
        }
    }
    return st;
    
}
int stringlength(char ch[])
{
    int count=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
bool ispalindrome(vector<char> st)
{
    int s=0;
    int e=st.size()-1;
    while(s<=e)
       { 
        if(st[s]!=st[e])
        return false;
        
            s++;
            e--;
           
        
        //return true;
       }
       
    return true;
}

 int main()
 {
    char ch[20]={'n','@','0','p','n','#'};
    int len=stringlength(ch);
    vector<char> ch2=checkvalid(ch,len);
    for(int i=0;i<ch2.size();i++)
    {
        cout<<ch2[i]<<" ";
    }
    cout<<ispalindrome(ch2);

   /* char n[5]={'N','s','#',' '};
    if(n[2]>65)
{
    cout<<"true";
}
else{
    cout<<"false";
}*/
 }