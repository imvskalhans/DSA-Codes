/*
leetcode 1103. Distribute Candies to People
We distribute some number of candies, to a row of n = num_people people in the following way:
We then give 1 candy to the first person, 2 candies to the second person, and so on until we give n candies to the last person.
Then, we go back to the start of the row, giving n + 1 candies to the first person, n + 2 candies to the second person, and so on until we give 2 * n candies to the last person.
*/
#include<iostream>
#include<vector>
using namespace std;

vector<int> distributeCandies(int candies, int num_people)
{
    vector<int> ans(num_people, 0);
    int i = 0;
    int count = 1;
    while (candies > 0)
    {
        if (candies >= count)
        {
            ans[i] += count;
            candies -= count;
        }
        else
        {
            ans[i] += candies;
            candies = 0;
        }
        i++;
        count++;
        if (i == num_people)
        {
            i = 0;
        }
    }
    return ans;
}

int main()
{
    int candies, num_people;
    cin >> candies >> num_people;
    vector<int> ans = distributeCandies(candies, num_people);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}

/*
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people,0);
        int h=1;
        while(candies>0){
            for(int i=0;i<num_people;i++){
                if(candies-h>0){
                    ans[i]+=h;
                    candies-=h;
                    h++;
                }
                else{
                    ans[i]+=candies;
                    candies=0;
                }
            }
        }
        return ans;
    }
};
*/