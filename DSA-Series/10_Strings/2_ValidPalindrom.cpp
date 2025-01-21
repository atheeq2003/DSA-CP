#include<bits/stdc++.h>
using namespace std;

string processedString(string s) {
    string result = "";
    for(char i : s) {
        if(isalnum(i)) {
            result.push_back(tolower(i));
        }
    }
    return result;
}

bool isalphaNum(char s) {
    if(s >= '0' && s <= '9' || s >= 'a' && s <= 'z') {
        return true;
    }
    return false;
}

bool isPalindrome(string &s) {
    int start = 0;
    int end = s.length()-1;
    while(start < end) {
        if(!isalphaNum(tolower(s[start]))) {
            start++;
            continue;
        }
        if(!isalphaNum(tolower(s[end]))) {
            end--;
            continue;
        }

        if(tolower(s[start]) != tolower(s[end])) {
            return false;
        }

        start++;
        end--;
    }
    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";
    cout << s << endl;
    string resultString = processedString(s);
    cout << resultString << endl;
    cout << isPalindrome(s) << endl;
    cout << isPalindrome(resultString);
}