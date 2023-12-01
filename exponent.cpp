#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    long double n,x,y;
    cin>>n;
    x=pow(n,2);
    y=pow(2,n);
    if(y>x)
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