#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    ll n,d;
    cin>>n>>d;
    vector<int>v,v2;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
    }

    for (int i = d; i < n; i++)
    {
        v2.push_back(v[i]);
    }
    for (int i = 0; i < d; i++)
    {
        v2.push_back(v[i]);
    }
    for(auto element : v2)
    {
    cout<<element<<" ";
    }
    cout<<'\n';
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