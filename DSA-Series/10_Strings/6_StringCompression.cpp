// 443. String Compression -> https://leetcode.com/problems/string-compression/description/
#include<bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars) {
    int idx = 0;
    for(int i = 0; i < chars.size(); i++) {
        char ch = chars[i];
        int count = 0;
        while(i < chars.size() && ch == chars[i]) {
            count++;
            i++;
        }

        if(count == 1) {
            chars[idx] = ch;
            idx++;
        }
        else {
            chars[idx] = ch;
            idx++;
            string strCount = to_string(count);
            for(char digit : strCount) {
                chars[idx] = digit;
                idx++;
            }
        }
        i--;
    }
    chars.resize(idx);
    return chars.size();
}

int main() {
    vector<char> chars = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    cout << compress(chars) << endl;
}