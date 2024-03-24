//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;
int n,k;
vector<ll>v;

//------------------------------------------------------------------------------
ll mx_sum(){
    ll cur=0LL,mx=0;
    for (int i = 1; i <=n; i++)
    {
        cur+=v[i];
        mx=max(mx,cur);
        cur=max(0LL,cur);
    }
    return mx;
}
ll Norm(ll a, ll M)
{
     a %= M;
     if (a < 0)
          a += M;
     return a;
}
ll modAdd(ll a, ll b, ll M)
{
     a = Norm(a, M), b = Norm(b, M);
     return (a + b) % M;
}

void solve(void)
{
    v.clear();
    cin>>n>>k;
    ll temp=0;
    v.resize(n+2);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        temp+=v[i];
    }
    
    ll res=mx_sum();
    temp-=res;
    // cout<<temp<<res;
    for (int i = 1; i <=k; i++)
    {
        ll cur=res;
        res=modAdd(cur,res,mod);
    }
    temp%=mod;
    res=modAdd(temp,res,mod);
    cout<<res<<'\n';
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