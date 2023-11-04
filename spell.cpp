#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
using ll=long long ;

void solve(void)
{
    string name="Timur";
    sort(name.begin(),name.end());
    string s;
    int n;
    cin>>n>>s;
    sort(s.begin(),s.end());
    if(name==s)
    cout<<"YES"<<"\n";
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