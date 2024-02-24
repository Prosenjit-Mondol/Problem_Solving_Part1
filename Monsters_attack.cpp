//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
    }
    vector<int>x;
    for(int i=0;i<n;i++)
    {
        int o;
        cin>>o;
        x.push_back(o);
    }
    vector<pair<ll,int>>vp;
    for (int i = 0; i <n; i++)
    {
        vp.push_back({abs(x[i]),v[i]});
    }
    sort(vp.begin(),vp.end());
    for (int i = 0; i <n; i++)
    {
        cout<<vp[i].first<<" "<<vp[i].second<<"\n";
    }
}


//------------------------------------------------------------------------------
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