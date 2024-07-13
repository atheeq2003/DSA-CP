// StringStream
// https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?isFullScreen=true
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> string;
    stringstream ss(str);
    int i;
    char ch;
    while(ss>>i) {         
        string.push_back(i);
        ss >> ch;
    }
    return string;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}