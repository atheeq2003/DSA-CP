// 1. Two Sum -> https://leetcode.com/problems/two-sum/description/
#include<bits/stdc++.h>
using namespace std;
// O(n)
vector<int> twoSum(vector<int> arr, int target) {
    vector<int> ans3;
    unordered_map<int, int> map;
    for(int i = 0; i < arr.size(); i++) {
        int first = arr[i];
        int second = target - first;
        if(map.find(second) != map.end()) {
            ans3.push_back(i);
            ans3.push_back(map[second]);
            break;
        }
        map[first] = i;
    }
    return ans3;
}
// O(nlogn)
vector<int> betterApp(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size()-1;
    sort(arr.begin(), arr.end());
    vector<int> ans2;
    //{5, 2, 11, 7, 15} -> {2, 5, 7, 11, 15}
    while(start < end) {
        if(arr[start] + arr[end] > target) {
            end--;
        }
        else if(arr[start] + arr[end] < target) {
            start++;
        }
        else if(arr[start] + arr[end] == target) {
            ans2.push_back(start);
            ans2.push_back(end);
            return ans2;
        }
    }
}
// O(n^2)
vector<int> bruteForce(vector<int> arr, int target) {
    vector<int> ans1;
    for(int i = 0; i < arr.size(); i++) {
        for(int j = i+1; j < arr.size(); j++) {
            if(arr[i] + arr[j] == target) {
                ans1.push_back(i);
                ans1.push_back(j);
            }
        }
    }
    return ans1;
}

int main() {
    vector<int> arr = {5, 2, 11, 7, 15};
    int target = 9;
    vector<int> ans1 = bruteForce(arr, target);
    vector<int> ans2 = betterApp(arr, target);
    vector<int> ans3 = twoSum(arr, target);
    for(int i : ans1) {
        cout << i << " ";
    }
    cout << endl;
    for(int i : ans2) {
        cout << i << " ";
    }
    cout << endl;
    for(int i : ans3) {
        cout << i << " ";
    }
}