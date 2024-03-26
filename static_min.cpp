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
    ll ma=INT_MAX,n,q;
    cin>>n>>q;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
    }
    ll r[n+1];
    r[0]=INT_MAX;
    for (int i =1; i <=n; i++)
    {
        r[i]=min(v[i-1],r[i-1]);
    }
    
    for (int i = 0; i < q; i++)
    {
        ll a,b;
        cin>>a>>b;
        a--;
        b--;
        for (int i = a; i <=b; i++)
        {
            ma=min(ma,v[i]);
        }
        cout<<ma<<'\n';
        ma=INT_MAX;
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