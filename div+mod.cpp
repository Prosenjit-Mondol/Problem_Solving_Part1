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
    ll l,r,a;
    cin>>l>>r>>a;
    ll ma=r/a+r%a;
    ll m=r/a*a-1;
    if(m>=1)
    ma=max(ma,m/a+m%a);
    cout<<ma<<"\n";
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}