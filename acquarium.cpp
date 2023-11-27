#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;


void solve(void)
{
    ll n,x,cover=0,total;
    cin>>n>>x;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    ll l=0,r=1e11,re=0;
    while (l<=r)
    {
        ll mid=(l+r)/2;
        total=mid*n;
        cover=0;
        for (int i = 0; i <n; i++)
        {
            cover+=min(mid,v[i]);
        }
        ll space=total-cover;
        if(x>=space)
        {
            l=mid+1;
            re=max(re,mid);
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<re<<'\n';
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}