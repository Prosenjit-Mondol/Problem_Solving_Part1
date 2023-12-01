#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a>=b&&c<=b)||(a<=b&&c>=b))
    {
        cout<<"Yes"<<'\n';
    }
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