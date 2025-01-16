// 2965. Find Missing and Repeated Values -> https://leetcode.com/problems/find-missing-and-repeated-values/description/
#include<bits/stdc++.h>
using namespace std;
// TC: O(n^2) SC: O(1)
vector<int> optimal(vector<vector<int>> grid) {
    unordered_set<int> set;
    int a = 0;
    int b = 0;
    int expectSum = 0;
    int actualSum = 0;
    int n = grid.size();
    vector<int> ans;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            actualSum += grid[i][j];
            if(set.find(grid[i][j]) != set.end()) {
                a = grid[i][j];
                ans.push_back(a);
            }
            set.insert(grid[i][j]);
        }
    }
    expectSum = n*n * (n*n + 1)/2;
    b = expectSum + a - actualSum;
    ans.push_back(b);
    return ans;
}
// TC: O(n^2) SC: O(n)
vector<int> brute(vector<vector<int>> grid) {
    int a = 0;
    int b = 0;
    unordered_map<int, int> map;
    vector<int> ans;
    for(int i = 0; i < grid.size(); ++i) {
        for(int j = 0; j < grid.size(); ++j) {
            map[grid[i][j]]++;
        }
    }
    for(int i = 1; i <= grid.size() * grid.size(); i++) {
        if(map[i] == 2) {
            a = i;
        }
        if(map[i] == 0) {
            b = i;
        }
    }
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}


int main() {
    vector<vector<int>> grid = {{1,3}, {2,2}};
    vector<int> ans1 = brute(grid);
    for(int i : ans1) {
        cout << i << " ";
    }
    cout << endl;
    vector<int> ans2 = optimal(grid);
    for(int i : ans2) {
        cout << i << " ";
    }
}