#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
using ll=long long ;

void solve(void)
{
    vector<ll>v;
    for(int i=0;i<3;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
    }
    sort(v.begin(),v.end());
    ll d=v[1]-v[0];
    if((v[0]+2*d)%v[2]==0)
    {
        cout<<"YES"<<"\n";
    }
    else
    cout<<"NO"<<"\n";
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