#include<bits/stdc++.h>
using namespace std;
double averageWaitingTime(vector<vector<int>>& customers) {
    double serviceTime = customers[0][0] + customers[0][1];
    double totalWait = serviceTime - customers[0][0];
    for(int i = 1; i < customers.size(); i++) {
        if(serviceTime < customers[i][0]) 
            serviceTime = customers[i][0];
        serviceTime += customers[i][1];
        totalWait += (serviceTime - customers[i][0]);
    }
        return totalWait/customers.size();
}
int main() {
    vector<vector<int>> myVector = {{1,2},{2,5},{4,3}};
    double output = averageWaitingTime(myVector);
    cout << output << endl; 
}