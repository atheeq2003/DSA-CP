#include<bits/stdc++.h>
using namespace std;
int sumOfSquares(vector<int>& nums) {
    vector<int> arr=nums;
    int n=arr.size();
    int sumSqrs=0; 
    for(int i=1;i<=arr.size();i++) {
        if((n%i)==0){
            sumSqrs+=arr[i-1]*arr[i-1];
        }    
    }
    return sumSqrs;
}
int main() {
    vector<int> myVector={2,7,1,19,18,3};
    int output=sumOfSquares(myVector);
    cout << output << endl;
}