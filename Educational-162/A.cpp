#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF=1e18;
const int N=1e6+6;
const int md=998244353;

void solve()
{
     int n;
     cin>>n;
     int a[n];
     int ans=0, cnt=0;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         if(a[i]==1)
         {
             cnt++;
         }
     }
     int i=0;
     while(a[i]==0)
     {
         i++;
     }
     int j=n-1;
     while(a[j]==0)
     {
         j--;
     }

     ans=j-i+1-cnt;

     cout<<ans<<endl;
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

