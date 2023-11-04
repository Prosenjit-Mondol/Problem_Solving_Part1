#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;

void solve(void)
{
    ll h;
    int n,m;
    cin>>h>>n>>m;
    while(h>0&&n&&h/2+10<h)
    {
        n--;
        h=h/2+10;
    }
    if(m*10>=h)
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