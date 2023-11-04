#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
#define vi vector<int>v
#define pi pair<int,int>
using namespace std;
using ll=long long ;

void solve(void)
{
    ll n,k;
    cin>>n>>k;
    ll la=0,ka=0,ni=n-la-ka,x=1,y=k;
    while((x+y)<=n/2)
    {
        la++;
        ka=la*k;
        ni=n-la-ka;
        x=la+1;
        y=x*k;
    }
    cout<<la<<" "<<ka<<" "<<ni<<"\n";
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}