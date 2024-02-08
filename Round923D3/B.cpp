#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define int long long

const int N = 1024;



void solve()
{
    vector<int>v(26, 0);
    string ans;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        for(int j=0; j<26; j++)
        {
            if(v[j]==x)
            {
                ans+=(char)(j+'a');
                v[j]++;
                break;
            }
        }
    }

    cout<<ans<<endl;

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

