class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) 
    {
        vector<int> digits;
        for(int num : nums)
        {
            vector<int> tempdigit;
            while(num != 0)
            {
                tempdigit.insert(tempdigit.begin(),num % 10);
                num /= 10;
            }
            digits.insert(digits.end(), tempdigit.begin(), tempdigit.end());
        }
        return digits;
    }
};


/*   
     vector<int> ans;
        vector<int> temp;
        for (int i = 0; i < nums.size(); i++) 
        {
            if (nums[i]>=0&&nums[i] < 10) 
            {
                ans.push_back(nums[i]);
            } 
            else 
            {
                int n = nums[i];
                int rev = 0;
                while (n > 0) 
                {
                    int d=n%10;
                    if(n%10==0)
                {
                    temp.push_back(d);
                    //temp.insert(temp.begin(),d);
                }
                reverse(temp.begin(), temp.end());
               // temp.insert(temp.begin(), ans.begin(), ans.end());
                    rev = rev * 10 + d;
                    n /= 10;
                }
                while (rev > 0) 
                {
                    int d = rev % 10;
                    ans.push_back(d);
                    rev /= 10;
                }
            }
        }
        return ans;
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];
            while (n > 0) {
                ans.push_back(n % 10);
                n /= 10;
            }
        }
        return ans;
    }
};
*/
