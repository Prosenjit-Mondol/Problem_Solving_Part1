//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int o;
        cin>>o;
        v.push_back(o);
    }
    int ma=-1;
    for (int i = 0; i <n-1; i++)
    {
        ma=max(ma,abs(v[i+1]-v[i]));
    }
    
    int ans=INT_MAX;
    for (int i = 2; i < n; i++)
    {
        int tma=max(ma,abs(v[i]-v[i-2]));
        ans=min(ans,tma);
    }
    cout<<ans<<'\n';
}


//------------------------------------------------------------------------------
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