//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 10e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    ll o=0,n,k,c=0;
    cin>>n>>k;
    if (n>=k)
    {
      if (k%2==0)
      {
        k--;
      }
      cout<<(k/2)<<'\n';
      return;
    }
    k=k/2;
    c=n-k;
    //cout<<c<<'\n';
    ll r=max(o,c);
    cout<<r<<'\n';
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