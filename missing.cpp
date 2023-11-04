#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;

void solve(void)
{
    ll ts,n,s=0;
    cin>>n;
    int a[n+1];
    for (int i = 0; i <n-1; i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    ts=n*(n+1)/2;
    cout<<(ts-s)<<"\n";
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}