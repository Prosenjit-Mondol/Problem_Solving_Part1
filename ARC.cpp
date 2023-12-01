#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    int a,b;
    cin>>a>>b;
    vector<int>v;
    for(int i=0;i<4;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    if(a==1 && b==1)
    cout<<v[0]<<'\n';
    else if(a==1 && b==2)
    cout<<v[1]<<'\n';
    else if(a==2 && b==1)
    cout<<v[2]<<'\n';
    else if(a==2 && b==2)
    cout<<v[3]<<'\n';
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