#include<bits/stdc++.h>
using namespace std;
int findLucky(vector<int>& arr) {
    unordered_map<int,int>mp;
    for( int x=0;x<arr.size();x++){
        mp[arr[x]]++;
    }
    vector<int>ans;
    for(auto i:mp){
        if(i.first==i.second){
             ans.push_back(i.first);
          }
    }
    sort(ans.begin(),ans.end());
    if(ans.size()==0){
        return -1;
    }
    else
    return ans[ans.size()-1];
    }
int main() {
    vector<int> myVector ={1,2,2,3,3,3};
    int output = findLucky(myVector);
    cout << "result: " << output;
}