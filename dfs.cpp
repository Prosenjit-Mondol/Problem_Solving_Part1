//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
int x;
bool vis[x];
vector<int>adj(x);

void dfs(int s){
    if (vis[s]) return;
    else vis[s]=true;
    for ( auto u: adj[s])
    {
        dfs(u);
    }
    
}
void solve(void)
{
    cin>>x;
    dfs(0);
    if (vis[x])
    {
        cout<<1;
    }
    else
    cout<<0;
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