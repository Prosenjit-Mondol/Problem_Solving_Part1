#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll gc=__gcd(c,d);
    c/=gc;
    d/=gc;

    cout<<min(a/c,b/d)<<'\n';
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}