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
const int N=1e6+6;
const int md=998244353;

void solve()
{
    int a, b, l;
    cin>>a>>b>>l;
    set<int>st;
    st.clear();
    int ans=0;
    int x=1, y=1;
    while(x<=10000000)
    {

        y=1;
        while(y<=10000000)
        {

            int xy=x*y;
            if(l%xy==0)
            {
                st.insert(l/xy);
            }
            y*=b;
        }
        x*=a;
    }

    cout<<st.size()<<endl;
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

