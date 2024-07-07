#include<bits/stdc++.h>
using namespace std;
bool isAcronym(vector<string>& words, string s) {
    vector<string> str=words;
    string acronym;
    for(int i=0;i<str.size();i++) {
        string str1=str[i];
        acronym.push_back(str1[0]);
    }
    if(s == acronym)
        return true;
    else
        return false;
}
int main() {
    vector<string> myVector = {"never","gonna","give","up","on","you"};
    bool output = isAcronym(myVector, "ngguoy");
    cout << output << endl;
}