//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
ll fact(int n){
    if (n==1)
    {
        return 1;
    }
    return n*fact(n-1)%mod;
}
void solve(void)
{
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    int l=s.size();
    ll f=fact(l);
    cout<<f;
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