//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

//------------------------------------------------------------------------------

void solve(void)
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>v;
    for (int i = 0; i <m; i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(b,a));
    }
    sort(v.begin(),v.end());
    int ans=0;
    for (int i =m-1; i>=0; i--)
    {
      if(n<=0)
      break;
      ans+=(min(v[i].second,n)*v[i].first);
      n-=v[i].second;
    }
    cout<<ans<<'\n';
}


//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
    while(t--)
     {
       solve();
     }
return 0;
}