#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;
void solve(void)
{
  ll z,l,r;
  cin>>l>>r;
  z=(r-l+1)/2;
  if(z==0)
  {
    cout<<"NO"<<"\n";
  }
  else{
    cout<<"YES"<<"\n";
    ll x=l,y=l+1;
    for (int i = 0; i <z; i++)
    {
      cout<<x<<" "<<y<<"\n";
      x+=2;y+=2;
    }
    
  }
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