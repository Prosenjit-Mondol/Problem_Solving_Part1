#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    ll a,b,c,d,cc=0;
    cin>>a>>b>>c>>d;
    if(a<b)
    cc++;
    if(a<c)
    cc++;
    if(a<d)
    cc++;
    cout<<cc<<'\n';
    
}


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