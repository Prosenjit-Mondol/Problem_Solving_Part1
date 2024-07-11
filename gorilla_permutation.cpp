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
    ll n,m,k;
    cin>>n>>m>>k;
    for (int i = n; i>=k; i--)
    {
        cout<<i<<" ";
    }
    for (int i = m+1 ; i < k; i++)
    {
        cout<<i<<" ";
    }
    for (int i = 1; i < m; i++)
    {
        cout<<i<<" ";
    }
    cout<<m<<'\n';
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