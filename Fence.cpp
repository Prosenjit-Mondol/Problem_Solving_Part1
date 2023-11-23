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
    ll mi=INT_MAX,ans=0,n,k;
    int r=0;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    vector<int>v2(n+1);
    v2[0]=0;
    for (int i = 1; i <=n; i++)
    {
        v2[i]=v2[i-1]+v[i-1];
    }
    for (int i = 1; i <=n-k+1; i++)
    {
        ans=v2[i+k-1]-v2[i-1];

        if(mi>ans)
        {
          mi=ans;
          r=i;
        }
    }
    cout<<r<<"\n";
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