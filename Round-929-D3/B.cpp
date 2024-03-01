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
    int sum=0;
    int a[n];
    int cnt1=0, cnt2=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>a[i];
        x=a[i];
        if(x%3==1)
        {
            cnt1++;
        }
        if(x%3==2)
        {
            cnt2++;
        }
        sum+=abs(x);
    }

    int rm=sum%3;
    if(rm==0)
    {
        cout<<0<<endl;
    }
    else if(rm==2)
    {
        cout<<1<<endl;
    }
    else
    {
        if(cnt1)
        {
            cout<<1<<endl;
        }
        else
        {
            int ans=min(n, 2ll);
            cout<<ans<<endl;

        }

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

