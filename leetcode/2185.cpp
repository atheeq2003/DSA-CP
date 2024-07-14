// 2185 - Counting Words With a Given Prefix
// Easy - Array, String, String Matching
// https://leetcode.com/problems/counting-words-with-a-given-prefix/description/
#include<bits/stdc++.h>
using namespace std;
int prefixCount(vector<string>& words, string pref) {
    int count=0;
    for(int i=0;i<words.size();i++) {
        string a=words[i].substr(0,pref.size());
        if(a==pref) 
            count++;
    }
    return count;
}
int main() {
    vector<string> myVector = {"pay","attention","practice","attend"};
    int output = prefixCount(myVector, "at");
    cout << output << endl;
}