#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    ll c=0,n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
    }
    auto nn=unique(v.begin(),v.end());
    if (*it<*(it+1))
    {
      for(auto it=v.begin();it!=nn-1;it++)
      {
        if (*it<*(it+1))
        {
          
        }
        
      }
    }
    else
    {
      for(auto it=v.begin();it!=nn-1;it++)
      {

      }
    }
    
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}