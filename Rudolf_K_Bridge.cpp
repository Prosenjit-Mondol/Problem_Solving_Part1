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
    ll x,n,m,k,d,l=0,r=LONG_LONG_MAX;
    cin>>n>>m>>k>>d;
    vector<ll>v(n+1,0);
    for (int  t=1;t<=n;t++)
    {
        vector<ll>vec(m,0);
        multiset<ll>s;
        ll po=0;
        cin>>x;
        vec[0]=1;
        s.insert(1);
        for (int i = 1; i <m; i++)
        {
            cin>>x;
            vec[i]=x+1+(*s.begin());
            s.insert(vec[i]);
            if(i>d){
                s.erase(s.find(vec[po++]));
            }
        }
        v[t]=v[t-1]+vec[m-1];
        if (t>=k)
        {
            r=min(r,(v[t]-v[t-k]));
        }
        
    }
    cout<<r<<'\n';
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