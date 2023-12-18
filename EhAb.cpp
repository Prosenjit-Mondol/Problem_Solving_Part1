#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;

void solve(void)
{
    ll od=0,ev=0,n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
        if (o%2==0)
        {
          ev=1;
        }
        else
        {
          od=1;
        }
        
    }
    if ((ev==0 && od==1)||(ev==1 && od==0))
    {
      for(auto element : v)
      {
       cout<<element<<" ";
      }
      cout<<'\n';
      return;
    }
    
    sort(v.begin(),v.end());
    for(auto element : v)
    {
    cout<<element<<" ";
    }
    cout<<'\n';
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}