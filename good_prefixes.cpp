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
    vector<ll>v,vp(n+1);
    vp[0]=0;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
        vp[i+1]=vp[i]+o;
    }
    ll ma=v[0];
    if (v[0]==0)
    {
        c++;
    }
    for (int i = 1; i <n; i++)
    {
        ma=max(ma,v[i]);
        if (ma==(vp[i+1]-ma))
        {
            c++;
        }
        
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