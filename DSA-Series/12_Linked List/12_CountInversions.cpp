#include<bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr, int start, int mid, int end) {
    vector<int> temp;
    int i = start;
    int j = mid+1;
    int InvCount = 0;
    while(i <= mid && j <= end) {
        if(arr[i] < arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }
        else {
            temp.push_back(arr[j]);
            j++;
            InvCount += (mid-i+1);
        }
    }
    while(i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= end) {
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx = 0; idx < temp.size(); idx++) {
        arr[idx+start] = temp[idx];
    }
    return InvCount;
}

// Using Merge Sort Optimal Approach
int countInversions(vector<int> &arr, int start, int end) {
    if(start < end) {
        int mid = start + (end-start)/2;
        // Left 
        int leftInvCount = countInversions(arr, start, mid);
        // Right
        int rightInvCount = countInversions(arr, mid+1, end);
        
        int InvCount = merge(arr, start, mid, end);

        return leftInvCount + rightInvCount + InvCount;
    }
    return 0;
}

int main() {
    vector<int> arr = {1,3,5,10,2,6,8,9};
    int start = 0;
    int end = arr.size()-1;
    int ans = countInversions(arr, start, end);
    cout << ans << endl;
}