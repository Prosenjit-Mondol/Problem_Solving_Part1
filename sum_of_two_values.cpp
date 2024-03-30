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
    ll n,x;
    cin>>n>>x;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
    }
    map<ll,ll>mp;
    bool f=true;
    for (ll i = 0; i <n; i++)
    {
        if (f)
        {
            if (mp.find(x-v[i])!=mp.end())
            {
                cout<<(*(mp.find(x-v[i]))).second<<" "<<i+1<<'\n';
                f=false;
            }
            mp.insert({v[i],i+1});
        }
        
    }
    if(f)
    cout<<"IMPOSSIBLE"<<'\n';
}


//------------------------------------------------------------------------------
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