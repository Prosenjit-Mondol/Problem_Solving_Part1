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
    ll n,m;
    cin>>n>>m;
    if (m==1)
    {
        ll r=((n-1)*n)/2;
        cout<<r<<" "<<r<<'\n';
        return;
    }
    ll ma=((n-m)*(n-m+1))/2;
    ll rm=0,mi=(n/m);
    if (n%m==0)
    {
        rm=(mi*(mi-1))/2;
        rm=rm*(n/m);
    }
    else
    {
        rm=(mi*(mi+1))/2;
        rm=rm*(n%m);
        ll x=((mi*(mi-1))/2)*(m-(n%m));
        rm=rm+x;
    }
    cout<<rm<<" "<<ma<<'\n';
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