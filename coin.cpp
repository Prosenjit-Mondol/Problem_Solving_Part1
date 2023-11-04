#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
using ll=long long ;

void solve(void)
{
    ll n,k;
    cin>>n>>k;
    ll x=gcd(2,k);
    if(n%x==0)
    {
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}