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
    ll n,i,cnt=0,fl=0;
    string s;
    cin>>n>>s;
    for(i=0;i<n;i++)
      {if(s[i]=='1')
        {cnt++;
       if(i+1<n)
        if(s[i+1]=='1')
          fl=1;
      }}
        if(cnt==2&&fl)
        {
         cout<<"NO"<<'\n';
         return;
        }
        if(cnt&1)
        cout<<"NO"<<'\n';
        else
        cout<<"YES"<<'\n';
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