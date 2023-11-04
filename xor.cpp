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
    string s,t,r;
    cin>>s;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='1')
        {
            t[i]='0';
        }
        else{
            t[i]='1';
        }
        if(s[i]==t[i])
        {
            r[i]='0';
        }
        else
        {
            r[i]='1';
        }
        cout<<t[i];
    }
    cout<<endl;
    
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