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
      int n,k;
      cin>>n>>k;
      int a[n], x[n];
      map<int, int>mp;
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      for(int i=0;i<n;i++)
      {
          cin>>x[i];
          mp[abs(x[i])]+=a[i];
      }

      int total=0;
      int last=0;
      for(auto it:mp)
      {
          total+=(it.ff-last)*k;
          last=it.ff;
          if(total<it.ss)
          {
              no;
              return;
          }
          total-=it.ss;
      }
      yes;
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

