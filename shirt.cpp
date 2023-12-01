#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    double r=0,a,b,c,d;
    cin>>a>>b>>c>>d;
    if(d==1){
        r=1.0;
        cout<<fixed<<setprecision(12)<<r<<'\n';
    }
    else if(d==1000){
        r=0.0;
        cout<<fixed<<setprecision(12)<<r<<'\n';
    }
    else
    {
        r=c/(b-a);
        cout<<fixed<<setprecision(12)<<r<<'\n';
    }
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