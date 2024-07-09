// 3110 - Score of a String
// Easy - String
// https://leetcode.com/problems/score-of-a-string/description/
#include<bits/stdc++.h>
using namespace std;
int scoreOfString(string s) {
        int score = 0;
        for (size_t i = 0; i < s.length() - 1; i++) {
            score += abs(s[i] - s[i + 1]);
        }
        return score;
}
int main() {
    int output = scoreOfString("zaz");
    cout << output << endl;
}