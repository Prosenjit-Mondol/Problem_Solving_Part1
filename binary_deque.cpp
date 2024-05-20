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
  vector<int>v(n+1);
  for(int i=1;i<=n;i++)
  {
      int o;
      cin>>o;
      v[i]=v[i-1]+o;
  }
  int p=0,ans=0;
  for (int  i = 1; i <=n; i++)
  {
    if (v[i]-v[p]<s) continue;
    while (v[i]-v[p]>s)
    {
      p++;
    }
    ans=max(ans,i-p);
  }
  if (ans>0)
  {
    cout<<n-ans<<endl;
  }
  
  else
  cout<<-1<<'\n';
  
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