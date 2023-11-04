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
    if(n%10==0)
    {
      ll r=n/10;
      cout<<(r*25)<<"\n";
    }
    else if(n%8==0)
    {
      ll r=n/8;
      cout<<(r*20)<<"\n";
    }
    else if(n%6==0)
    {
      ll r=n/6;
      cout<<(r*15)<<"\n";
    }
    else
    {
      ll v=6,m=max(v,n+1);
      cout<<m/2*5<<"\n";
    }
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