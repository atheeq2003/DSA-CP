#include<bits/stdc++.h>
using namespace std;

// Moore's Voting Algo {1, 2, 2, 2, 2, 1}
int optimal(vector<int> arr) {
    int freq = 0;
    int ans = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(freq == 0) {
            ans = arr[i];
        }
        if(ans == arr[i]) {
            freq++;
        }
        else {
            freq--;
        }
    }

    int count = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == ans) {
            count++;
        }
    }

    if(count > arr.size()/2) {
        return ans;
    }
    else {
        return -1;
    }
}

int better(vector<int> arr) {
    int freq = 1;
    int ans = 0;
    sort(arr.begin(), arr.end());
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] == arr[i-1]) {
            freq++;
            ans = arr[i];
        }
        else {
            freq = 1;
            ans = arr[i];
        }
        if(freq > arr.size()/2) {
            return ans;
        }
    }
    return -1;
}

int brute(vector<int> arr) {
    for(int i = 0; i < arr.size(); i++) {
        int freq = 0;
        for(int j = 0; j < arr.size(); j++) {
            if(arr[i] == arr[j]) {
                freq++;
            }
        }
        if(freq > arr.size()/2) {
            return arr[i];
        }        
    }
    return -1;
}


int main() {
    vector<int> arr = {1, 2, 3, 4};
    cout << brute(arr) << endl;
    cout << better(arr) << endl;
    cout << optimal(arr) << endl;
}