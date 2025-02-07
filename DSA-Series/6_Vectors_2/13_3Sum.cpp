#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSumOptimal(vector<int> &nums) {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++) {
        if(i > 0 && nums[i] == nums[i-1])
            continue;
        int j = i + 1;
        int k = nums.size()-1;
        while(j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if(sum < 0) {
                j++;
            }
            else if(sum > 0) {
                k--;
            }
            else {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j < k && nums[j] == nums[j-1]) j++;
                while(j < k && nums[k] == nums[k+1]) k--;
            }
        }
    }
    return ans;
}

vector<vector<int>> threeSumBetter(vector<int> &nums) {
    set<vector<int>> st;
    for(int i = 0; i < nums.size(); i++) {
        set<int> hashset;
        for(int j = i+1; j < nums.size(); j++) {
            int k = -(nums[i] + nums[j]);
            if(hashset.find(k) != hashset.end()) {
                vector<int> temp = {nums[i], nums[j], k};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

vector<vector<int>> threeSumBrute(vector<int> &arr) {
    set<vector<int>> st;
    for(int i = 0; i < arr.size(); i++) {
        for(int j = i+1; j < arr.size(); j++) {
            for(int k = j+1; k < arr.size(); k++) {
                if(arr[i] + arr[j] + arr[k] == 0) {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main() {
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans1 = threeSumBrute(nums);
    for(int i = 0; i < ans1.size(); i++) {
        for(int j = 0; j < ans1[0].size(); j++) {
            cout << ans1[i][j] << " ";
        }
        cout << endl;
    }
    vector<vector<int>> ans2 = threeSumBetter(nums);
    for(int i = 0; i < ans2.size(); i++) {
        for(int j = 0; j < ans2[0].size(); j++) {
            cout << ans2[i][j] << " ";
        }
        cout << endl;
    }
    vector<vector<int>> ans3 = threeSumOptimal(nums);
    for(int i = 0; i < ans3.size(); i++) {
        for(int j = 0; j < ans3[0].size(); j++) {
            cout << ans3[i][j] << " ";
        }
        cout << endl;
    }
}