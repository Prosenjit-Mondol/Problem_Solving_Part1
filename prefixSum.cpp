#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    ll y=0,re=0,n,t;
    cin>>n>>t;

    vector<ll>v;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    vector<ll>vvv;
    for(int i=0;i<n;i++)
    {
    y+=v[i];
    vvv.push_back(y);
    }
    vvv.insert(vvv.begin(),0);
    for (int i = 0; i < t; i++)
    {
        int a,b;
        cin>>a>>b;
        re=vvv[b]-vvv[a-1];
        cout<<re<<'\n';
    }
    
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll tt=1;
    while(tt--)
     {
       solve();
     }
return 0;
}