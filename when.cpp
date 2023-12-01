#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    int m,h,n;
    cin>>n;
    h=n/60;
    m=n%60;
    cout<<(21+h)<<':';
    if(m<10)
    cout<<0<<m<<'\n';
    else
    cout<<m<<'\n';
}


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