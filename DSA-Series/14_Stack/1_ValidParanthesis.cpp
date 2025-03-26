// 20. Valid Parentheses -> https://leetcode.com/problems/valid-parentheses/description/
#include<bits/stdc++.h>
using namespace std;

bool isValid(string str) {
    stack<char> st;
    for(char i : str) {
        if(i == '(' || i == '[' || i == '{') {
            st.push(i);
        }
        else {
            if(st.empty()) { // {()}]
                return false;
            }
            else {
                if(st.top() == '(' && i == ')' || st.top() == '[' && i == ']' || st.top() == '{' && i == '}') {
                    st.pop();
                }
                else {
                    return false; // [{(]}]
                }
            }
        }
    }
    return st.empty(); // {([]
}

int main() {
    string s1 = "()";
    string s2 = "()[]{}";
    string s3 = "(]";
    string s4 = "([])";
    cout << isValid(s4) << endl;
}