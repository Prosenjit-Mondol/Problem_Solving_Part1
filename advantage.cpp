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
    ll n;
    cin>>n;
    vector<int>v,v2;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    v2=v;
    sort(v2.begin(),v2.end());
    for (int i = 0; i < n; i++)
    {
        if(v[i]==v2[n-1])
        {
            v[i]=v[i]-v2[n-2];
        }
        else
        v[i]=v[i]-v2[n-1];
    }
    for(auto element : v)
    {
    cout<<element<<" ";
    }
    cout<<"\n";
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