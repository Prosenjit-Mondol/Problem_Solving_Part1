#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
using ll=long long ;

void solve(void)
{
    ll a,b,c,d,r=0;
    cin>>a>>b>>c;
    d=abs(b-a);
    int n=min(a,b);
    if(c==(n+2*d))
    r=1;
    else
    {
        d=abs(a-c);
        n=min(a,c);
        if(b==(n+d*2))
        r=1;
        else{
            d=abs(b-c);
            n=min(b,c);
            if(a==(n+d*2))
            r=1;
            else
            r=0;
        }
    }
    if(r==1)
    {
        cout<<"YES"<<"\n";
    }
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