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
  ll x,y,z,k;
  cin>>x>>y>>z>>k;
  ll ans=0;
  for (ll i = 1; i <=x; i++)
  {
    if (k%i==0)
    {
      for (ll j= 1; j<=y; j++)
      {
        if (k%(i*j)==0)
        {
          ll cur=k/(i*j);
          if (1<=cur&&cur<=z)
          {
            ll r=(x-i+1)*(y-j+1)*(z-cur+1);
            ans=max(ans,r);
          }
          
        }
        
      }
      
    }
    
  }

  cout<<ans<<'\n';
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