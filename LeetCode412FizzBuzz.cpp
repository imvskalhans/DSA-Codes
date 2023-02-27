/*

*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
vector<string> fizzBuzz(int n)
{
    vector<string> ans;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            ans.push_back("FizzBuzz");
            // break;
        }
        else if (i % 3 == 0)
        {
            ans.push_back("Fizz");
            // break;
        }
        else if (i % 5 == 0)
        {
            ans.push_back("Buzz");
            // break;
        }
        else
        {
            string s = to_string(i);
            ans.push_back(s);
        }
    }
    return ans;
}
int main()
{
    int num;
    cout << "enter num" << endl;
    cin >> num;
    vector<string> result = fizzBuzz(num);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}