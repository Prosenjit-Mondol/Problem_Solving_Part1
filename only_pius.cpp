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
    int v[3];
    cin>>v[0]>>v[1]>>v[2];
    sort(v,v+3);
    v[0]=v[0]+1;
    sort(v,v+3);
    v[0]=v[0]+1;
    sort(v,v+3);
    v[0]=v[0]+1;
    sort(v,v+3);
    v[0]=v[0]+1;
    sort(v,v+3);
    v[0]=v[0]+1;
    ll r=v[0]*v[1]*v[2];
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