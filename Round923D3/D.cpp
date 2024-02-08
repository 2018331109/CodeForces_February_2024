#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 200005;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define pb push_back



void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    vector<int>v;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]!=a[i+1])
        {
            v.pb(i+1);
        }
    }

    int q;
    cin>>q;
    while(q--)
    {
        int l, r;
        cin>>l>>r;
        int ind=lower_bound(v.begin(), v.end(), l)-v.begin();
        /*
        if(v[ind]>r)
        {
            cout<<-1<<" "<<-1<<endl;
            continue;
        }
        */
        if(ind<v.size())
        {
            if(v[ind]+1<=r)
            {
                cout<<v[ind]<<" "<<v[ind]+1<<endl;
            }
            else
            {
                cout<<-1<<" "<<-1<<endl;
            }
        }
        else
        {
            cout<<-1<<" "<<-1<<endl;
        }


    }
    cout<<endl;
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

