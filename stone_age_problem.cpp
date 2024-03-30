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
    ll l=0,ans=0,n,q;
    cin>>n>>q;
    map<ll,ll>mp;
    for(int i=1;i<=n;i++)
    {
        ll o;
        cin>>o;
        mp[i]=o;
        ans+=o;
    }
    for (int i = 0; i <q; i++)
    {
        int a;
        cin>>a;
        if (a==2)
        {
            ll x;
            cin>>x;
            ans=n*x;
            l=x;
            mp.clear();
        }
        else
        {
            ll p,x;
            cin>>p>>x;
            if (mp[p]==0)
            {
                ans+=(x-l);
                mp[p]=x;
            }
            else{
                ans+=(x-mp[p]);
                mp[p]=x;
            }
        }
        cout<<ans<<'\n';
    }
    
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