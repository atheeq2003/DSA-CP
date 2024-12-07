#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>& nums) {
    int count = 0;
    size_t n = nums.size();
    for (size_t i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) {
            count++;
        }
    }
    if(count <= 1) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    check(nums);
}