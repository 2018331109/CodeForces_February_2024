#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF=1e18;
const int md=998244353;

void solve()
{
    int n;
    cin>>n;
    int k=1;
    while(k<n)
    {
        k*=2ll;
    }
    if(k==n)
    {
        cout<<k<<endl;
    }
    else
    {
        cout<<k/2ll<<endl;
    }




    /*
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a, a+n);
    */
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

