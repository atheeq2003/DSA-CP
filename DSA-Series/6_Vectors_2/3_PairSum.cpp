#include<bits/stdc++.h>
using namespace std;

vector<int> optimalApp(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size()-1;
    vector<int> ans2;
    //{1, 2, 3, 7, 9}
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
    vector<int> arr = {1, 2, 3, 7, 9}; 
    int target = 5;
    vector<int> ans1 = bruteForce(arr, target);
    for(int i : ans1) {
        cout << i << " ";
    }
    cout << endl;
    vector<int> ans2 = optimalApp(arr, target);
    for(int i : ans2) {
        cout << i << " ";
    }
    cout << endl;
}