#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;

void solve(void)
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    int z=count(s.begin(),s.end(),'0');
    int o=count(s.begin(),s.end(),'1');
    z=n-2*(min(z,o));
    cout<<z<<" \n";
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