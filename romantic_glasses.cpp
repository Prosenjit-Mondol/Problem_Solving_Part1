//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;
ll mod = 10e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    ll n,ev=0,od=0;
    map<ll,ll>mp;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
    }
    for (int i = 0; i <n; i++)
    {
        if (1&i)
        {
            ev+=v[i];
        }
        else
        {
            od+=v[i];
        }
        ll d=ev-od;
        if (ev==od)
        {
            cout<<"YES"<<'\n';
            return;
        }
        if (mp.find(d)!=mp.end())
        {
            cout<<"YES"<<'\n';
            return;
        }
        mp[d]=1;
    }
    cout<<"NO"<<'\n';
    
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