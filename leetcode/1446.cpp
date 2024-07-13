// 1446 - Consecutive Characters
// Easy - String
// https://leetcode.com/problems/consecutive-characters/description/
#include<bits/stdc++.h>
using namespace std;
int maxPower(string s) {
    int count=1;
    int maxim=1;
    for(int i=1;i<s.size();i++) {
        if(s[i]==s[i-1]){
            count++;
        }
        else{
            count=1;
        }
        maxim = max(maxim,count);
    }
    return maxim;
}
int main() {
    int output = maxPower("leetcode");
    cout << output << endl;
}