#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    int n,mx=0;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mp;
    for (int i = 0; i <n; i++)
    {
        mp[s[i]]++;
        mx=max(mx,mp[s[i]]);
    }
    //cout<<mx;
    if(n%2==0)
    {
      if (mx>=n/2)
      {
        cout<<(mx-(n-mx))<<'\n';
      }
      else
      {
        cout<<0<<'\n';
      }
    }
    else
    {
      if (mx>n/2)
      {
        cout<<(mx-(n-mx))<<'\n';
      }
      else
      cout<<1<<'\n';
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