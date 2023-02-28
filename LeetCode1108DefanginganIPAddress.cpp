/*
leetcode 1108. Defanging an IP Address
Given a valid (IPv4) IP address, return a defanged version of that IP address.

*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <sstream>
#include <numeric>
#include <functional>
#include <iterator>
#include <cmath>
#include <cassert>
using namespace std;
string defangIPaddr(string address)
{
    // replace_if(address.begin(), address.end(), ".", "[.]");
    string ans;
    for (int i = 0; i < address.size(); i++)
    {
        if (address[i] == '.')
        {
            ans.push_back('[');
            ans.push_back('.');
            ans.push_back(']');
        }
        else
        {
            ans.push_back(address[i]);
        }
    }
    return ans;
}
int main()
{
    cout << "enter ip address string" << endl;
    string address;
    getline(cin, address);
    string result = defangIPaddr(address);
    cout << result << endl;
}