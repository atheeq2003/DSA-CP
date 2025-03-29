#include<bits/stdc++.h>
using namespace std;

vector<int> getpricespan(vector<int> &prices) {
    stack<int> s;
    vector<int> ans;
    int span = 0;
    for(int i = 0; i < prices.size(); i++) {
        while(s.size() > 0 && prices[s.top()] <= prices[i]) {
            s.pop();
        }
        if(s.empty()) {
            span = i + 1;
            ans.push_back(span);
        }
        else {
            span = i - s.top();
            ans.push_back(span);
        }
        s.push(i);
    }
    return ans;
}

int main() {
    vector<int> prices = {100,80,60,70,60,75,85};
    vector<int> stockSpan = getpricespan(prices);
    for(int i : stockSpan) {
        cout << i << " ";
    }
    cout << endl;
}