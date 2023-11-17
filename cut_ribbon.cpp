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
    ll t=0,n,a,b,c;
    cin>>n>>a>>b>>c;
    if(n==a||n==b||n==c)
    t++;
    if(n==(a+b))
    t++;
    if(n==(a+c))
    t++;
    if(n==(c+b))
    t++;
    cout<<t<<'\n';
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