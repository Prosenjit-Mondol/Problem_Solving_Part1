//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

const int N=1e5+10;
vector<int>g[N];
bool vis[N];
bool dfs(int vertex,int par){
    vis[vertex]=true;
    bool isloopexist=false;
    for (int child : g[vertex])
    {
        if (vis[child] && child==par)
        {
            continue;
        }
        if (vis[child])
        {
            return true;
        }
        
        isloopexist|=dfs(child,vertex);
    }
    return isloopexist;
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int n,m;
  cin>>n>>m;
  for (int i = 0; i < m; i++)
  {
    int a,b;
    cin>>a>>b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  bool isloop=false;
  for (int i = 1; i <=n; i++)
  {
    if (vis[i])
    {
        continue;
    }
    if (dfs(i,0))
    {
        isloop=true;
        break;
    }
    
  }
  
  cout<<isloop<<'\n';
return 0;
}