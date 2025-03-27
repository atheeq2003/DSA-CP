// 155. Min Stack -> https://leetcode.com/problems/min-stack/description/
#include<bits/stdc++.h>
using namespace std;
class MinStack {
public:

    stack<pair<int, int>> s;
    int minVal = 0;

    void push(int val) {
        if(s.empty()) {
            s.push({val, val});
        }
        else {
            minVal = min(val, s.top().second);
            s.push({val, minVal});
        }
    }

    void pop() {
        s.pop();
    }

    int top() {
        return s.top().first;
    }

    int getMin() {
        return s.top().second;
    }

    bool empty() {
        if(s.size() == 0) {
            return true;
        }
        else {
            return false;
        }
    }
};
int main() {
    MinStack minStack;
    minStack.push(1);
    minStack.push(2);
    minStack.push(3);
    minStack.push(4);
    cout << minStack.top() << endl;
    cout << minStack.getMin() << endl;
    while(!minStack.empty()) {
        cout << minStack.top() << " ";
        minStack.pop();
    }
    cout << endl;
}