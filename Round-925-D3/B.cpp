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
    int mx=0;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    mx=a[n-1];
    int total=0;
    int cnt=0;
    int lagbe=0;
    for(int i=n-1;i>=0;i--)
    {
        cnt++;
        total+=a[i];
        int cur=total/cnt;
        if(total%cnt!=0)
        {
            cur++;
        }
        mx=max(mx, cur);

        lagbe=mx*n;
        if(sum<lagbe)
        {
            no;
            return;
        }
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

