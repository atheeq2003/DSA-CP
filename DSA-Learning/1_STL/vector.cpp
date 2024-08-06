#include<bits/stdc++.h>
using namespace std;
void explainVector() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    vector<pair<int,int>> vec;
    vec.push_back({2,4});
    vec.emplace_back(4,6);
    // (5,100) -> 5 size of vector and 100 is the value that will be stored in 5 indices
    vector<int> v1(5,100);
    vector<int> v2(5,10);
    v2.push_back(6);
    vector<int> v3(v1);
    cout << v3[0] << endl;
}
int main() {
    explainVector();

}