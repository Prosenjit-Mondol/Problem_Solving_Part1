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
    ll x=0,y,n,m;
    cin>>n>>m;
    vector<int>v;
    for(int i=0;i<m;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    if(m==1)
    {
        cout<<(m-1)<<'\n';
        return;
    }
    x=v[0]-1;
    for (int i = 1; i < m; i++)
    {
        if (v[i-1]>v[i])
        {
            x+=(n-v[i-1]+v[i]);
        }
        else
        {
            x+=(v[i]-v[i-1]);
        }
    }
    cout<<x<<'\n';
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