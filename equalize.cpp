//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int sum=0,c=INT_MIN,n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    s.insert(x);
    }
    map<int,int>mp;
    for (auto it :s)
    {
        mp[it+1]++;
        mp[it+n+1]--;
    }

    for(auto x:mp)
    {
       sum+=x.second;
       c=max(c,sum);
    }

    cout<<c<<'\n';
}


//------------------------------------------------------------------------------
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