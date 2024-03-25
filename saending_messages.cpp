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
    ll s=0,sum=0,n,f,a,b;
    cin>>n>>f>>a>>b;
    vector<ll>v(n+2);
    v[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    for (int i =1; i <=n; i++)
    {
        ll d=(v[i]-v[i-1])*a;
        
        f-=min(d,b);
    }
    if (0<f)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
    }
    
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