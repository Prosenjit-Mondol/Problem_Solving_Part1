#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    vector<int>v;
    for(int i=0;i<10;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    int c=v[0];
    for (int i = 0; i <2; i++)
    {
        c=v[c];
    }
    cout<<c<<'\n';
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