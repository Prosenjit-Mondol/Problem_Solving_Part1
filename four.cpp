#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if(x1==x2)
    cout<<x3;
    else if(x1==x3)
    cout<<x2;
    else if(x2==x3)
    cout<<x1;
    if (y1==y2)
    cout<<" "<<y3<<'\n';
    else if (y1==y3)
    cout<<" "<<y2<<'\n';
    else if (y3==y2)
    cout<<" "<<y1<<'\n';
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