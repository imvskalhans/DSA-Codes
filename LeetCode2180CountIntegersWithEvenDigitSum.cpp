/*
Leetcode 2180
*/
 #include<iostream>
 using namespace std;

int countEven(int num) {
int count = 0;
    for (int i = 1; i <= num; i++) {
        int digitSum = 0;
        int n = i;
        while (n > 0) {
            digitSum += n % 10;
            n /= 10;
        }
        if (digitSum % 2 == 0) count++;
    }
    return count;
}
int main()
 {
    int num;
    cout<<"enter the value of n"<<endl;
    cin>>num;
    cout<< "No of digits with even digit sum till n ="<<countEven(num)<<endl;
 }