#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
const int INF=1e18;
const int N=2e5+5;

void solve()
{
     int n;
     cin>>n;
     int sum=0;
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     sort(a, a+n);
     for(int i=1;i<n;i++)
     {
         sum+=(a[i]-a[i-1]);
     }

     cout<<sum<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

