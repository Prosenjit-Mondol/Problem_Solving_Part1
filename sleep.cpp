#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
#define vi vector<int>v
#define pi pair<int,int>
using namespace std;
using ll=long long ;

void solve(void)
{
    int n,H,M,h,m;
    cin>>n>>H>>M;
    int time=H*60+M;
    int ans=24*60;
    for (int i = 0; i < n; i++)
    {
        cin>>h>>m;
        int t=h*60+m-time;
        if(t<0)
        t+=24*60;
        ans=min(ans,t);
    }
    cout<<ans/60<<" "<<ans%60<<"\n";
    
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}