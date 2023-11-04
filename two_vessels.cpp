#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;

void solve(void)
{
    int a,b,c,r;
    double d;
    cin>>a>>b>>c;
    d=(a+b)/2.0;
    int m=min(a,b);
    d-=(double)m;
    d/=(double)c;
    cout<<ceil(d)<<"\n";
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