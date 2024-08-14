// We use transform to make the string uppercase or lowercase, The third argument s.begin() tells to store
// the transformed characters from beginning of the string. So it will start from s[0] and continues. It basically overwrites the char from the begin.
// If it was s.begin()+2 it will overwrite from s[2]. 
// https://codeforces.com/contest/59/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int lower=0;
    int upper=0;
    for(int i=0; i<s.size(); i++) {
        if(islower(s[i])) {
            lower++;
        }
        else {
            upper++;
        }
    }
    if(lower>=upper) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << "\n";
    }
    else {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << "\n";
    }
}