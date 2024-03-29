//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
bool cmt(pair<int,int>&p1,pair<int,int>&p2){
    return p1.second<p2.second;
}
void solve(void)
{
    ll n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),cmt);
    int ma=0,ans=0;
    for (int i = 0; i <n; i++)
    {
        if (v[i].first>=ma)
        {
            ans++;
            ma=v[i].second;
        }
        
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