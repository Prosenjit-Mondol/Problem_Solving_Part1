#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;

void solve(void)
{
    int s1,s2,s3,s4,n,m;
    cin>>s1>>s2>>s3>>s4;
    m=max(s1,s2);
    n=min(s3,s4);
    int m1,n1;
    m1=max(s3,s4);
    n1=min(s1,s2);
    if(m>n && m1>n1)
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