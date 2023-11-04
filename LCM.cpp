#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
using ll=long long ;

void solve(void)
{
    ll l,r;
    cin>>l>>r;
    if(2*l>r)
    {
        cout<<"-1"<<" "<<"-1"<<endl;
    }
    else
    {
        cout<<l<<" "<<2*l<<endl;
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