#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    ll n;
    cin>>n;
    ll sum=n;
    int a,b,c;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n;
    
    sum+=(a*100+c*10+b);
    sum+=(b*100+a*10+c);
    cout<<sum<<'\n';
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