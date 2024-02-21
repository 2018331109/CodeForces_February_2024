#include<bits/stdc++.h>
using namespace std;
#define int long long
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF=1e18;
const int N=2e5+5;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        a[i]+=i+1;
    }

    sort(a, a+n);
    cout<<a[n-1]<<" ";
    int cnt=1;
    int mx=a[n-1];
    for(int i=n-2; i>=0; i--)
    {
         if(a[i]>=mx)
         {
             cout<<mx-1<<" ";
         }
         else
         {
             cout<<a[i]<<" ";
         }
         mx=min(mx-1, a[i]);
    }
    cout<<endl;
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

