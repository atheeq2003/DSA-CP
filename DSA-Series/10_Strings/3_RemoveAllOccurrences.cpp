#include<bits/stdc++.h>
using namespace std;

string removeOccurrences(string &s, string part) {
    while(s.find(part) < s.length() && s.length() > 0) {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main() {
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << removeOccurrences(s, part) << endl;
}