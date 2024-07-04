#include<bits/stdc++.h>
using namespace std;
void explainVector() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    vector<pair<int,int>> vec;
    vec.push_back({2,4});
    vec.emplace_back(4,6);
    vector<int> v1(5,100);
    vector<int> v2(5,10);
    v2.push_back(6);
    vector<int> v3(v1);
}
int main() {
    explainVector();

}