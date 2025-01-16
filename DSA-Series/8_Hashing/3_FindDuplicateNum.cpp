// 287. Find the Duplicate Number -> https://leetcode.com/problems/find-the-duplicate-number/description/
#include<bits/stdc++.h>
using namespace std;

int optimal(vector<int> arr) {
    int slow = 0;
    int fast = 0;
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while(slow != fast);

    slow = 0;

    while(slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

int brute(vector<int> arr) {
    unordered_set<int> set;
    int ans = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(set.find(arr[i]) != set.end()) {
            ans = arr[i];
            break;
        }
        set.insert(arr[i]);
    }
    return ans;
}

int main() {
    vector<int> arr = {1,3,4,2,2};
    cout << brute(arr);
    cout << endl;
    cout << optimal(arr);
}