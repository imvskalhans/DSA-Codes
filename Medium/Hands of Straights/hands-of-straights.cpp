//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        // code here
         map<int,int> mm;
        for(auto x:hand)mm[x]++;
        int num=-1,c=0;
        while(true){
            num=mm.begin()->first;
            c=0;
            while(c<groupSize){
                if(mm[num]==0)return false;
                mm[num]--;
                if(mm[num]==0)mm.erase(num);
                num++;
                c++;
            }
            if(mm.size()==0)break;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends