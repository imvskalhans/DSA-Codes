/*
22 Jan solution by Vishal Singh
Leetcode
1491. Average Salary Excluding the Minimum and Maximum Salary
Easy
You are given an array of unique integers salary where salary[i] is the salary of the ith employee.

Return the average salary of employees excluding the minimum and maximum salary.
Answers within 10-5 of the actual answer will be accepted.
*/


 #include<iostream>
 #include<vector>
 #include<algorithm>
 #include <iomanip>
using namespace std;


double average(vector<int>& salary) 
{
    sort(salary.begin(),salary.end());
    double sum=0;
    int i=1;
    for(;i<salary.size()-1;i++)
    {
        sum+=salary[i];
    }
    // i wanted to get result upto 5 decimal places
    // but its not working currently.
    //std::fixed;
    //std::setprecision(5);
    return sum/(i-1);
}

int main()
{
    vector<int> salary;
    cout<<"enter salaries"<<endl;
     int input;
    while (std::cin >> input) {
        salary.push_back(input);
    }
    double result=average(salary);
    cout<<"average = "<<std::fixed<<std::setprecision(5)<<result<<endl;
}