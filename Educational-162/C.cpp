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
    int n, k;
    cin>>n>>k;
    int a[n+1]= {};
    int b[n+1]= {};
    int c[n+1]= {};
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        c[i]=c[i-1]+a[i];
        b[i]+=b[i-1]+(a[i]==1);
    }

    while(k--)
    {
        int l, r;
        cin>>l>>r;
        int len=r-l+1;
        int cnt=b[r]-b[l-1];
        int sum=c[r]-c[l-1];
        int now=cnt*2+(len-cnt);
        if(now>sum or l==r)
        {
            no;
            continue;
        }
        yes;
    }
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

