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
    ll c=0,n;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
    }

    vector<ll>v1(n+1);
    v1[0]=0;

    for(int i=1;i<=n;i++)
    {
        v1[i]=v1[i-1]+v[i-1];
        if (v1[i]<0)
        {
            ll r=v1[i]%n;
            r+=n;
            v1[i]=r%n;
        }
        else
        {
            v1[i]=v1[i]%n;
        }
        
    }
    map<int,int>mp;
    for (int i = 0; i <v1.size(); i++)
    {
        if(mp[v1[i]]) c++;
        mp[v1[i]]++;
    }
    cout<<c<<'\n';
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