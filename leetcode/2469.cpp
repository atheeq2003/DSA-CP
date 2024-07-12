// 2469 - Convert the Temperature
// Easy - Math
// https://leetcode.com/problems/convert-the-temperature/description/
#include<bits/stdc++.h>
using namespace std;
vector<double> convertTemperature(double celsius) {
    vector<double> ans;
    double kelvin=0;
    double fahrenheit=0;
    kelvin = celsius + 273.15;
    fahrenheit = celsius * 1.80 + 32.00;
    ans.push_back(kelvin);
    ans.push_back(fahrenheit);
    return ans;
}
int main() {
    vector<double> output = convertTemperature(36.50);
    for(int i=0;i<=output.size();i++) {
        cout << output[i] << " ";
    }
}