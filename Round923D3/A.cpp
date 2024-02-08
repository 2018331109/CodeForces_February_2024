#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define int long long

const int N = 1024;



void solve()
{
      int n;
      cin>>n;
      string s;
      cin>>s;
      int l=-1, r=-1;
      for(int i=0;i<n;i++)
      {
          if(s[i]=='B')
          {
              l=i;
              break;
          }
      }
      if(l==-1)
      {
          cout<<0<<endl;
          return;
      }
      for(int i=n-1;i>=0;i--)
      {
          if(s[i]=='B')
          {
              r=i;
              break;
          }
      }

      cout<<r-l+1<<endl;

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

