#include<bits/stdc++.h>
#define vi vector<int>v
#define pi pair<int,int>
using namespace std;
using ll=long long ;

void solve(void)
{
    ll t,n,a,b,c;
    cin>>n>>a>>b>>c;
    ll ma=0,x,y,z;
    for (x=0;x*a<=n;x++)
    {
      for (y=0;(y*b+x*a)<=n;y++)
      {
        t=n-(y*b+x*a);
        if(t%c==0){
        z=t/c;
        ma=max(ma,x+y+z);
        }
      }
      
    }
    
    cout<<ma<<'\n';
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t;
  t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}