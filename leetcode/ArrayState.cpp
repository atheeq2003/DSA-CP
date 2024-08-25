// https://leetcode.com/contest/weekly-contest-412/problems/final-array-state-after-k-multiplication-operations-i/description/
// We use auto minIt here to store the iterator index in minIt.
/* Example: arr = {2,3,1,4,5} lets say we want to replace minimum element with 7. We do that by finding minimum
   element in that array. 
            1. We find minElement and store its index = 2, element = 1. 
            2. To access the min element we use *pointer
            3. then we change the element to 7 by *minIt = 7 (1 = 7)
            4. this changes the arr to, arr = {2,3,7,4,5} */
#include <bits/stdc++.h>
using namespace std;
vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
    for(int i = 1; i <= k; i++) {
        auto minIt = min_element(nums.begin(), nums.end());
        *minIt = (*minIt) * multiplier;
    }
    return nums;
}
int main() {
    vector<int> nums = {8,4,6,5,6};
    int k = 5;
    int multiplier = 2;
    vector<int> finalState = getFinalState(nums, k, multiplier);
    for (int i : finalState) {
        cout << i << " ";
    }
    cout << "\n";
}