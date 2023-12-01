#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll= long double ;

void solve(void)
{
    ll n;
    cin>>n;
    ll x=pow(2,31);
    ll y=(1<<31);
    //cout<<x<<" "<<y;
    if(n>=y && n<=(x-1))
    cout<<"Yes"<<'\n';
    else
    cout<<"No"<<'\n';
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