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
    ll x,r,n;
    cin>>x>>n;
    r=1;
    for (ll i = 1; i*i <=x; i++)
    {
        if (x%i==0)
        {
            if (i>=n)
        {
            r=max(r,x/i);
        }
        if (x/i>=n)
        {
            r=max(r,i);
        }
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