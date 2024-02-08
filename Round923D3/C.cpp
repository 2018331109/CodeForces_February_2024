#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 200005;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;



void solve()
{
    int n, m,k;
    cin>>n>>m>>k;
    unordered_map<int, int>ma, mb;
    vector<int>ans(k+1, 0);
    set<int>st;
    int ca=0, cb=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x<=k)
        {
            ma[x]++;
        }
    }

    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        if(x<=k)
        {
            if(ma[x]==-1)
            {
                continue;
            }
            else if(ma[x]>0)
            {
                ma[x]=-1;
                st.insert(x);
            }
            else
            {
                mb[x]++;
            }
        }

    }

    for(auto it:ma)
    {
        if(it.second>0)
        {
            ca++;
        }

    }
    for(auto it:mb)
    {
        if(it.second>0)
        {
            cb++;
        }
    }

    if((ca<=k/2) and (cb<=k/2) and (ca+cb+st.size() == k))
    {
        yes;
        return;
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

