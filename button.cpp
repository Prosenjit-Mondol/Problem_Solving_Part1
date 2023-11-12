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
    ll a=0,b,d=0,c=0,n,m;
    cin>>n>>m;
    if(n>=m)
    {
        cout<<(n-m)<<'\n';
    }
    else
    {
      while (m>n)
      {
        if(m%2!=0)
        m++;
        else
        m/=2;
        c++;
      }
      c+=(n-m);
      cout<<c<<'\n';
    }
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t;
  t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}