#include<bits/stdc++.h>
using namespace std;
vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> ans;
    for(int i = 0; i < n; i++){
        ans.push_back(nums[i]);
        ans.push_back(nums[i + n]);
    }
    return ans;
}
int main() {
    vector<int> myVector = {2,5,1,3,4,7};
    vector<int> output = shuffle(myVector,3);
    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }
    cout << endl;
}