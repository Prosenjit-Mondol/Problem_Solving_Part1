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
    ll x,n;
    cin>>n;
    map<ll,ll>mp;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
        mp[o]++;
    }
    ll c=n;
    for (int i = 0; i <n-1; i++)
    {
        x=v[i]|v[i+1];
        if (mp[x]==0)
        {
            c++;
            mp[x]=1;
        }

        for (int j= i+2;j<n; j++)
        {
            x=x|v[j];
            if (mp[x]==0)
            {
                c++;
                mp[x]=1;
            }
        }
        x=0;
    }
    cout<<c<<'\n';
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