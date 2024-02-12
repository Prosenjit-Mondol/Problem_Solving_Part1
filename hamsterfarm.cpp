//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll= long long ;
ll mod = 10e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    ll x=1,y=0,r,ans=0,n,k;
    cin>>n>>k;
    for(int i=1;i<=k;i++)
    {
        ll o;
        cin>>o;
        r=n/o;
        if ((r*o)>ans)
        {
            ans=r*o;
            x=i;
            y=r;
        }
        
    }
    cout<<x<<" "<<y<<'\n';
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