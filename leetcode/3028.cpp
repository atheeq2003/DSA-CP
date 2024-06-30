#include<bits/stdc++.h>
using namespace std;
int returnToBoundaryCount(vector<int>& nums) 
{
    int antPos=0;
    int count=0;
    for(int i=0;i<nums.size();i++)
    {
        antPos += nums[i]; 
    }
    if(antPos==0)
    {
        cout << "1";
        return 1;
    }
    else
        cout << "0";
        return 0;
}
int main()
{
    vector<int> myVector ={2,3,-5};
    int output = returnToBoundaryCount(myVector);
    cout << endl;
    cout << output;
}