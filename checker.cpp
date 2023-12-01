#include<bits/stdc++.h>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    int a,b;
    cin>>a>>b;
    if((a+1)==b||(a-1)==b)
    cout<<"Yes"<<'\n';
    else if((a==1&&b==10)||(a==10 && b==1))
    cout<<"Yes"<<'\n';
    else
    cout<<"No"<<'\n';
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