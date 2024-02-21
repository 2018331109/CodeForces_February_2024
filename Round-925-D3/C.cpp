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
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int i=0, j=n-1;
    while(i<n-1 and a[i]==a[i+1])
    {
        i++;
    }
    if(i==n-1)
    {
        cout<<0<<endl;
        return;
    }
    while(j>=0 and a[j]==a[j-1])
    {
        j--;
    }

    if(a[i]==a[j])
    {
        cout<<j-i-1<<endl;
    }
    else
    {
        int tt=max(i+1,n-j);
        cout<<n-tt<<endl;
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

