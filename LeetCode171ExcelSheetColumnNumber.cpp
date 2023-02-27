/*

*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include<string>
using namespace std;

int titleToNumber(string columnTitle)
{
    long long int ans = 0;
    for (char c : columnTitle)
    {
        ans = ans * 26;
        ans = ans + c - 'A' + 1;
    }

    return ans;
}
int main()
{
    string s;
    cout << "enter string" << endl;
    getline(cin, s);
    int result = titleToNumber(s);
    cout<< result << endl;
}