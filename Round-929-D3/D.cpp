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
    int gc=0;
    int a[n];
    int cnt1=0, cnt2=0;
    int odd=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>a[i];
        x=a[i];
        if(x==1)
        {
            cnt1++;
        }
        if(x%2)
        {
            odd++;
        }


    }

    sort(a, a+n);
    if(a[0]!=a[1])
    {
        yes;
        return;
    }

    for(int i=1; i<n; i++)
    {
        if(a[i]%a[0])
        {
            yes;
            return;
        }
    }

    no;





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

