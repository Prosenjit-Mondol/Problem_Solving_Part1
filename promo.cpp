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
    ll n,q,x,y;
    cin>>n>>q;
    int a[n+3];
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    
    sort(a,a+n);
    int sum[n+3];
    sum[0]=0;
    for (int i = 1; i <= n; i++)
    {
      sum[i]=sum[i-1]+a[i-1];
    }
    
    for (int  i = 0; i <q; i++)
    {
      cin>>x>>y;
      cout<<(sum[n-y+x]-sum[n-x])<<'\n';
    }
    
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