#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    int prev = 0, ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        ans = max(ans, arr[i] - prev);
        prev = arr[i];
    }
    ans = max(ans, 2 * (x - prev));
    cout << ans << '\n';
  }
}