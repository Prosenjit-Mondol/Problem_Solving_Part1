#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    char a,b,c;
    cin>>a>>b>>c;
    if(a!=b && b!=c && c!=a)
    cout<<a<<'\n';
    else if(a==b && b==c)
    cout<<-1<<'\n';
    else
    {
        if(a==b && a!=c)
        cout<<c<<'\n';
        else if(a==c && a!=b)
        cout<<b<<'\n';
        else
        cout<<a<<'\n';

    }
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}