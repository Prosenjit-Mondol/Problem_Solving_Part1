#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    ll n,p,l,t,k;
    cin>>n>>p>>l>>t;
    ll rp=(n-1)/7+1;
    
    rp=(n+6)/7;
    ll hi=n,lo=0;
    while (hi-lo>1)
    {
        ll mid=(hi+lo)/2;
        ll rem = n-mid;
        ll x=rem*l+min(rp,2*rem)*t;
        if (x>=p)
        {
            lo=mid;
        }
        else
        {
            hi=mid-1;
        }
    }
    ll v=n-hi;
    ll point=v*l;
    point+=min(rp,2*v)*t;
    if (point>=p)
    {
      cout<<hi<<'\n';
    }
    else
    cout<<lo<<'\n';
}


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