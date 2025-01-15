#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> arr, int target) {
    vector<int> ans;
    unordered_map<int, int> map;
    for(int i = 0; i < arr.size(); i++) {
        int first = arr[i];
        int second = target - first;
        if(map.find(second) != map.end()) {
            ans.push_back(i);
            ans.push_back(map[second]);
            break;
        }
        map[first] = i;
    }
    return ans;
}

int main() {
    vector<int> arr = {5, 2, 11, 7, 15};
    int target = 9;
    vector<int> ans = twoSum(arr, target);
    for(int i : ans) {
        cout << i << " ";
    }
}