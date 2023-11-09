#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
#define vi vector<int>v
#define pi pair<int,int>
using namespace std;
using ll=long long ;

void solve(void)
{
    ll n;
    cin>>n;
    ll s=0;
    for (int  i=0;pow(2,i) <=n; ++i)
    {
        ll x=pow(2,i);
        s+=x;
    }
    ll total=(n*(n+1))/2;
    total=total-s;
    cout<<(total-s)<<'\n';
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}