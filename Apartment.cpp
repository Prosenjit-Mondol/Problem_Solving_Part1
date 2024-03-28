// Author  :  PROSENJIT MONDOL

#include <bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll = long long;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
  ll n, m, k;
  cin >> n >> m >> k;
  vector<ll> vn;
  for (int i = 0; i < n; i++)
  {
    ll o;
    cin >> o;
    vn.push_back(o);
  }
  sort(vn.begin(), vn.end());
  vector<ll> vm;
  for (int i = 0; i < m; i++)
  {
    ll o;
    cin >> o;
    vm.push_back(o);
  }
  sort(vm.begin(), vm.end());
  int pa=0,pb=0,ans=0;
  while (pa<n&&pb<m)
  {
    if (abs(vn[pa]-vm[pb])<=k)
    {
      ans++;
      pa++;
      pb++;
    }
    else if (vn[pa]<vm[pb])
    {
      pa++;
    }
    else
    {
      pb++;
    }
    
  }
  cout<<ans<<'\n';
}

//------------------------------------------------------------------------------
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t = 1;
  // cin>>t;
  while (t--)
  {
    solve();
  }
  return 0;
}