//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
  int c=0,n,s,sum=0;
  cin>>n>>s;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
      int o;
      cin>>o;
      v.push_back(o);
      sum+=o;
  }
  if (sum<s)
  {
    cout<<-1<<'\n';
    return;
  }
  if (sum==s)
  {
    cout<<0<<'\n';
    return;
  }
  int f=0,l=v.size()-1;
  while (sum>s)
  {
    if (v[f]==1)
    {
      f++;
      c++;
    }
    else if (v[l]==1)
    {
      l--;
      c++;
    }
    else
    {
      int fg=f,lg=l;
      while (v[fg]!=1)
      {
        fg++;
      }
      while (v[lg]!=1)
      {
        lg--;
      }
      if (lg<=fg)
      {
        c+=(l-lg);
        l=lg-1;
      }
      else
      {
        c+=(fg-f);
        f=fg+1;
      }
    }
    
    cout<<c<<" ";
    sum--;
  }
  //cout<<c<<'\n';
  
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