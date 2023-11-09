#include<bits/stdc++.h>
using namespace std;
using ll=long long ;

void solve(void)
{
    int d,a,b,c;
    cin>>a>>b>>c;

    ll ma=max(max(a,b),c);

    d=(a+b+c)-ma;

    if(d<ma)
    cout<<"Impossible"<<'\n';
    
    else if((a+b+c)%2==0)
    {
        ll x,y,z;
        x=(a+b-c)/2;
        y=(b+c-a)/2;
        z=(c+a-b)/2;
        cout<<x<<" "<<y<<" "<<z<<'\n';
    }
    else
    cout<<"Impossible"<<'\n';
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t;
  t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}