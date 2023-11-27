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
    ll n,x;
    cin>>n>>x;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    sort(v.begin(),v.end());
    ll sum=0,z,r=x/n+v[n-1];
    if(x==1)
    {
        if((v[1]-v[0])>0)
        cout<<(v[0]+1)<<'\n';
        else
        cout<<v[0]<<'\n';
        return;
    }
    z=r;
    for (ll i = r; i >=v[0]; i--)
    {
        sum=0;
        for (ll j=0;j<n;j++)
        {
            sum+=(i-v[j]);
            
        }
        //cout<<r<<sum<<" ";
        if (sum==x)
        {
            cout<<i<<'\n';
            return;
        }
        else if(sum<x)
        {
            break;
        }
        else if(sum>x)
        {
            z=i;
        }
        
    }
    if(z==r)
    cout<<z<<'\n';
    else
    cout<<(z-1)<<'\n';
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