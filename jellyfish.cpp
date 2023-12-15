//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

//------------------------------------------------------------------------------

void solve(void)
{
    ll c=0,a,b,n;
    cin>>a>>b>>n;
    c=b;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        c+=min(a-1,o);
    }
    cout<<c<<'\n';
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