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
    cin >> n;
    int nn=n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.pb(x);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    n=v.size();
    //cout<<n<<endl;
    int l = 0, r = 0;
    int ans = 0;
    while (r < n)
    {
        if (v[r] - v[l] < nn)
        {
            ans = max(ans, r - l + 1);
            r++;
        }
        else
        {
            while (l < r && v[r] - v[l] >= nn)
            {
                l++;
            }
        }
    }

    cout << ans << endl;
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

