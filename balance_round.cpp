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
    ll n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    ll x;
    cin>>x;
    v.push_back(x);
    }
    sort(v.begin(),v.end());
    ll c=1,ans=1;
    for (int i = 1; i <n; i++)
    {
        if((v[i]-v[i-1])>k)
        c=1;
        else
        c++;
        ans=max(ans,c);
    }
    cout<<n-ans<<"\n";
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