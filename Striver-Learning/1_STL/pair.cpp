#include<bits/stdc++.h>
using namespace std;
void explainPair() {
    pair<int, int> p = {2,5};
    cout << p.first << " " << p.second;
    cout << endl;
    pair<int, pair<int, int>> p1 = {1, {2,3}};
    cout << p1.first << " " << p1.second.second << " " << p1.second.first;
    cout << endl;
    pair<int, int> p2[] = {{1,2}, {3,4}, {4,5}};
    cout << p2[0].first << p2[0].second << " " << p2[1].second << " " << p2[2].first;  
}
int main() {
    explainPair();

}