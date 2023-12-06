#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    ll n,p,l,t,k=0;
    cin>>n>>p>>l>>t;
    ll rp=(n-1)/7+1;
    
    rp=(n+6)/7;
    
    while (1)
    {
        ll x=k*l+min(rp,2*k)*t;
        if (x>=p)
        {
            break;
        }
        else
        {
            k++;
        }
        
    }
    cout<<(n-k)<<'\n';
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