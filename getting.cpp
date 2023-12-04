#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    ll n,p,l,t,c=1;
    cin>>n>>p>>l>>t;
    if (n==1)
    {
        cout<<0<<'\n';
        return;
    }
    ll rp=(n-1)/7+1;
    
    rp=rp*t+l;
    
    if(rp>=p)
    {
        cout<<(n-1)<<'\n';
    }
    else
    {
        ll pr=rp;
        rp=p-rp;
        ll r=rp/l;
        ll v=r*l+pr;
        if (v==p)
        {
            cout<<(n-r-1)<<'\n';
        }
        else if(v>p)
        {
            cout<<(n-r-1)<<'\n';
        }
        else
        cout<<(n-r-2)<<'\n';
    }
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