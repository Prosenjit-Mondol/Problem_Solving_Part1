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
    ll j,n,s=0,ma;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    ma=v[0];
    s=v[0];
    for (int i = 1; i < n; i++)
    {
        if(s<0)
        s=0;
        if((v[i]-v[i-1])%2==0)
        s=v[i];
        else
        s+=v[i];
        ma=max(ma,s);

    }
    cout<<ma<<'\n';
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