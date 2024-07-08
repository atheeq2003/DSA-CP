// 1518 - Water Bottles
// Easy - Math, Simulation
// https://leetcode.com/problems/water-bottles/description/
#include<bits/stdc++.h>
using namespace std;
int numWaterBottles(int numBottles, int numExchange) {
    int totalBottles = numBottles;
    while (numBottles>=numExchange) {
        totalBottles+=numBottles / numExchange;
        numBottles=(numBottles / numExchange) + (numBottles % numExchange);
    }
    return totalBottles;
}
int main() {
    int output = numWaterBottles(9,3);
    cout << output;
}