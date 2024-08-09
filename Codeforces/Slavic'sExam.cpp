// https://codeforces.com/contest/1999/problem/D
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s, t;
        cin >> s >> t;
        int n = s.size();
        int m = t.size();
        int i = 0;
        int j = 0;
        while (i < n && j < m)
        {
            if (s[i] == '?')
            {
                s[i] = t[j];
                i++;
                j++;
            }
            else
            {
                if (s[i] == t[j])
                {
                    i++;
                    j++;
                }
                else
                {
                    i++;
                }
            }
        }
        if (j == m)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                if (s[i] != '?')
                {
                    cout << s[i];
                }
                else
                {
                    cout << 'a';
                }
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}