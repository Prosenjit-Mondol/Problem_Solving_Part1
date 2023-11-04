#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
using ll=long long ;

void solve(void)
{
     ll n,k,sum=0,b,m=0;
     cin>>n>>k;
     vector<ll>v;
     for (int i = 0; i <n; i++)
     {
        ll z;
        cin>>z;
        v.push_back(z);
        sum+=z;
     }
     sort(v.begin(),v.end());
     if(k==1)
     {
      cout<<max(sum-(v[0]+v[1]),sum-v[n-1])<<"\n";
     }
     else
     {
      long long int pref[n+1];
      pref[0]=0;
      sum=0;
      for (int i = 0; i < n; i++)
      {
         sum+=v[i];
         pref[i+1]=sum;
      }
      long long int preb[n+1];
      preb[0]=0;
      sum=0;
      reverse(v.begin(),v.end());
      for (int i = 0; i <n; i++)
      {
         sum+=v[i];
         preb[i+1]=sum;
      }
      long long int ans=0;
      for (int i = 0; i<=k; i++)
      {
         ans=max(ans,sum-(pref[(i*2)]+ preb[k-i] ));
      }
      cout<<ans<<"\n";
      
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