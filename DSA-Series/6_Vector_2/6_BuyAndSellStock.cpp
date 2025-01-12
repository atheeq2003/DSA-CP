// 121. Best Time to Buy and Sell Stock -> https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
#include<bits/stdc++.h>
using namespace std;

int buySellStock(vector<int> arr) {
    // Stores the profit of price that can be sold when the stock value is high [arr[i] - BestpriceToBuy]
    int maxProfit = 0;
    // The best price to buy the stock
    int bestPriceToBuy = arr[0];
    for(int i = 1; i < arr.size(); i++) {
        bestPriceToBuy = min(bestPriceToBuy, arr[i]);
        if(arr[i] > bestPriceToBuy) {
            maxProfit = max(maxProfit, arr[i] - bestPriceToBuy);
        }
    }
    return maxProfit;
}

int main() {
    vector<int> arr = {7,1,5,3,6,4};
    cout << buySellStock(arr);
}