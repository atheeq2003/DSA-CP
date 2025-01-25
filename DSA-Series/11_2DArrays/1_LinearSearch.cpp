#include<bits/stdc++.h>
using namespace std;

pair<int,int> linearSearchIndex(vector<vector<int>> &arr, int target) {
    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr[i].size(); j++) {
            if(arr[i][j] == target) {
                return make_pair(i, j);
            }
        }
    }
    return make_pair(-1, -1);
}

bool linearSearch(vector<vector<int>> &arr, int target) {
    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr[i].size(); j++) {
            if(arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6, 11, 12}, {7, 8, 9}};
    int target = 0;
    cout << linearSearch(arr, target) << endl;
    pair<int,int> p = linearSearchIndex(arr, target);
    cout << p.first << " " << p.second << endl;
}