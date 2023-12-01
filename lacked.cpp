#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    ll s,sum=0,t=45;
    cin>>s;
    for (int i = 0; i < 9; i++)
    {
        int a=s%10;
        sum+=a;
        s=s/10;
    }
    t=t-sum;
    cout<<t<<'\n';
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