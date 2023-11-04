#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;

void solve(void)
{
    ll s,r,n;
    cin>>n;
    if(n==0)
    {
        cout<<"1"<<"\n";
    }
    else
    {
        int p=n%4;
        if(p==0)
        cout<<"6"<<"\n";
        else{
            r=pow(1378,p);
            s=r%10;
            cout<<s<<"\n";
        }
    }
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