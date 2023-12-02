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
    if(d<=a){
        r=1.0;
        cout<<fixed<<setprecision(12)<<r<<'\n';
    }
    else if((a+1)<=d && d<=b){
        r=c/(b-(a+1)+1);
        cout<<fixed<<setprecision(12)<<r<<'\n';
    }
    else
    {
      r=0.0;
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