#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
using ll=long long ;

void solve(void)
{
    string s;
    cin>>s;
    int r=1;
    if(s[0]=='0')
    r=0;
    if(s[0]=='?')
    r=9;
    for (int i = 1;i<s.size(); i++)
    {
        if(s[i]=='?')
        r*=10;
    }
    
    cout<<r<<endl;
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