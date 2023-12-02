#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
#define vi vector<int>v
#define pi pair<int,int>
using namespace std;
using ll=long long ;
const int mod=1e9 +7;
void solve(void)
{
    ll n;
    cin>>n;
    int ans=1;
    for (int i = 0; i < n; i++)
    {
      ans *=2;
      ans%=mod;
    }
    
    cout<<ans<<"\n";
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}