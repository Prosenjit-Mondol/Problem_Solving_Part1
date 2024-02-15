//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 10e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
  int n,k,x;
  cin>>n>>k>>x;

  vector<int>v;
  for(int i=0;i<n;i++)
  {
      int o;
      cin>>o;
      v.push_back(o);
  }
  sort(v.begin(),v.end());
  vector<int>v2;
  v2[0]=0;
  for(int i=1;i<=n;i++)
  {
      v2[i]=v2[i-1]+v[i-1];
  }
  for(auto element : v2)
  {
  cout<<element<<" ";
  }
  }


//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}