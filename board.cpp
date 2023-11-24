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
    ll n,sum=0,s;
    cin>>n;
    for (ll i = 1; i <=n/2; i++)
    {
        sum+=(i*i*8);
    }
    cout<<sum<<'\n';
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