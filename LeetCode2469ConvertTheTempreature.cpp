/*
LeeCode 2569 Convert the Temperature
Description: Given a temperature in Fahrenheit, convert it to Celsius.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<double> convertTemperature(double celsius)
{
    vector<double> ans;
    double kelvin = celsius + 273.15;
    double Fahrenheit = celsius * 1.80 + 32.00;
    ans.push_back(kelvin);
    ans.push_back(Fahrenheit);
    return ans;
}

int main()
{
    double celsius = 0;
    vector<double> ans = convertTemperature(celsius);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}