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
    ll x=0,n,a,b;
    cin>>n>>a>>b;
    if (n<=a)
    {
        cout<<1<<'\n';
    }
    else if (a<=b)
    {
        ll ex=n/a;
        if (ex*a==n)
        {
            cout<<ex<<'\n';
        }
        else
        {
            cout<<ex+1<<'\n';
        }
    }
    else
    {
        cout<<1<<'\n';
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