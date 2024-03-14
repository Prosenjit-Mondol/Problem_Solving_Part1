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
    if (n==m)
    {
        cout<<(n*m-n+1)<<'\n';
    }
    else if (n>m)
    {
        ll r=(n*n-n+1);
        if (n%2!=0)
        {
            r=r-(n-m);
        }
        else
        r=r+(n-m);
        cout<<r<<'\n';   
    }
    else
    {
        ll r=(n*n-n+1);
        //if(n%2!=0)
        r=r+(n+m)*(m-n);
        
        cout<<r<<'\n';   
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