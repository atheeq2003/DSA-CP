// 567. Permutation in String -> https://leetcode.com/problems/permutation-in-string/description/
#include<bits/stdc++.h>
using namespace std;

bool isFreqSame(vector<int> freq, vector<int> winFreq) {
    for(int i = 0; i < 26; i++) {
        if(freq[i] != winFreq[i]) {
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1, string s2) {
    vector<int> freq(26);
    for(int i = 0; i < s1.length(); i++) {
        freq[s1[i] - 'a']++;
    }

    for(int i = 0; i < s2.length(); i++) {
        int winIdx = 0;
        int idx = i;
        int winSize = s1.length();
        vector<int> winFreq(26);
        while(winIdx < winSize && idx < s2.length()) {
            winFreq[s2[idx] - 'a']++;
            winIdx++;
            idx++;
        }
        if(isFreqSame(freq, winFreq)) {
            return true;
        }
    }
    return false;
}

int main() {
    string s1 = "ab";
    string s2 = "eidboaoo";
    cout << checkInclusion(s1, s2) << endl;
}