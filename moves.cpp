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
  double r,n;
  cin>>n;
  if(n==1)
  cout<<2<<'\n';
  else if(n==2 || n==3)
  cout<<1<<'\n';
  else
  {
    r=ceil(n/3);
    cout<<(int)r<<'\n';
  }
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}