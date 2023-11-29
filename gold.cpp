#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;
ll m,n;
bool f(ll n){
    if(n==m)
    return true;
    if(n%3!=0)
    return false;
    return f(n/3) || f(2*n/3);
    
}
void solve(void)
{
    cin>>n>>m;
    if(f(n))
    cout<<"YES"<<'\n';
    else
    cout<<"NO"<<'\n';
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