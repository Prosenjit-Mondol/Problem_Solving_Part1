#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
void solve(void)
{
    ll n,m;
    cin>>n>>m;
    vector<ll>v;
    map<ll,ll>mp;
    for (int i = 0; i <n; i++)
    {
        ll x;
        cin>>x;
        mp[x]++;
    }
    for (int i = 0; i < m; i++)
    {
        ll y=1,x;
        cin>>x;
        auto it=mp.upper_bound(x);
        if (it==mp.begin())
        {
            v.push_back(-1);
        }
        else
        {
            it--;
            v.push_back(it->first);
            it->second--;
            if (it->second==0)
            {
                mp.erase(it);
            }
            
        }
        
    }
    for(auto element : v)
    {
    cout<<element<<"\n";
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}