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
    int a[n+n];
    for(int i=0;i<2*n;i++)
    {
        cin>>a[i];
    }
    sort(a, a+n+n);
    int nn=n;
    int i=2*n-2;
    int ans=0;
    while(nn--)
    {
        ans+=a[i];
        i--;
        i--;
    }
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

