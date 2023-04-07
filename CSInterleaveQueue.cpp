/*

*/

#include<iostream>
#include<queue>
#include <bits/stdc++.h>
using namespace std;


queue<int> interLeaveQueue(queue<int> &q)
{
    // Write your code here.
    int s = q.size();
    queue<int> first;
    queue<int> ans;
    int k = s / 2;
    while (k != 0)
    {
        first.push(q.front());
        k--;
        q.pop();
    }
    //  while(k<s){
    //        second.push(q.front());
    //         k++;
    //         q.pop();
    // }
    k = s / 2;
    while (k--)
    {
        ans.push(first.front());
        first.pop();
        ans.push(q.front());
        q.pop();
    }
    return ans;
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    queue<int> res = interLeaveQueue(q);
    cout << res.front()<<" ";
    res.pop();
    cout << res.front()<<" ";
    res.pop();
    cout << res.front()<<" ";
    res.pop();
    cout << res.front()<<" ";
    res.pop();
    cout << res.front()<<" ";
    res.pop();
    cout << res.front()<<" ";
    res.pop();
    cout << res.front()<<" ";
    res.pop();
    cout << res.front() << " ";
}