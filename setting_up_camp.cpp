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
    ll ans=0,a,b,c;
    cin>>a>>b>>c;
    ans=a;
    ans+=(b/3);
    int r=b%3;
    if ((3-r)>c&&(3-r)%3!=0)
    {
        cout<<-1<<'\n';
        return;
    }
    r=r+c;
    ans+=(r/3);
    if (r%3)
    {
        ans++;
    }
    cout<<ans<<'\n';
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