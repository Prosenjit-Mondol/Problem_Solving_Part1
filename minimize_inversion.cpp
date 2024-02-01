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
    ll n;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
    }
    vector<ll>v1;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v1.push_back(o);
    }
    map<ll,ll>mp;
    for (int i = 0; i <n; i++)
    {
        mp.insert(pair<ll,ll>(v[i],v1[i]));
    }
    //sort(mp.begin(),mp.end());
    for(auto&x:mp)
    {
        cout<<x.first<<" ";
    }
    cout<<'\n';
    for(auto&x:mp)
    {
        cout<<x.second<<" ";
    }
    cout<<'\n';

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