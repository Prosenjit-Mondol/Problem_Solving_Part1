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
    ll n,r=0,c=0;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n;i++)
    {
        cout<<v[i]<<v[i+1]<<v[i+2];
        if(v[i]==v[i+1]==v[i+2])
        {
            c=1; 
            r=v[i];
            goto p;
        }
    }
    if(c==1)
    cout<<r<<endl;
    else
    cout<<"-1"<<endl;
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