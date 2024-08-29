// https://codeforces.com/problemset/problem/231/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
       int a[3];
       for(int i=0;i<3;++i)
        cin>>a[i];
       int count=0;
       for(int i=0;i<3;++i)
       {
           if(a[i]==1)
           count++;
       }
       if(count>=2)
       sum++;
    }
    cout<<sum<<endl;
    return 0;
}