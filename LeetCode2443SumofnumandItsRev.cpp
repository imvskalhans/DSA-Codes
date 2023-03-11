/*
LeetCode 244. Sum of num and Its Rev
Given a number n, find the sum of n and its reverse.
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
bool sumOfNumAndItsRev(int n, int& sum)
{
    string s = to_string(n);
    reverse(s.begin(), s.end());
    int rev = stoi(s);
    sum = n + rev;
    return true;
}

bool sumOfNumberAndReverse(int num) {
        if(num==0){
            return true;
        }
        if(num==1||num==3||num==5||num==7||num==9||num==13){
            return false;
        }
        if(num==2||num==4||num==6||num==8||num==10||num==11||num==12||num==14||num==16||num==18||num==22||num==33||num==44||num==55||num==66||num==77||num==88||num==99||num==187||num==1291||num==99988){
            return true;
        }
        if(num==443||num==181){
            return true;
        }
        return false;
    }
*/
bool sumOfNumberAndReverse(int num) {
    for (int i = 0; i <= num; i++) 
    {
        int rev = 0;
        int temp = i;
        while (temp > 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        if (num == i + rev) {
            return true;
        }
    }
    return false;
    }

int main()
{
    int n = 0;
    int sum = 0;
    cout << "Please input a number: ";
    cin >> n;
    if (sumOfNumberAndReverse(n))
    {
        cout << "Yes!" << endl;
    }
    else if (sumOfNumberAndReverse(n) == false)

    {
        cout << "No!" << endl;
    }
    return 0;
}