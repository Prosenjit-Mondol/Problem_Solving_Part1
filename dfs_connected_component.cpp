//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
const int N=1e5+10;
vector<vector<int>>cc;//storing connecting component
vector<int>current_cc;

vector<int>g[N];
bool vis[N];
void dfs(int vertex){
    vis[vertex]=true;
    current_cc.push_back(vertex);
    //cout<<vertex<<'\n';
    for ( int child:g[vertex])
    {
        //cout<<"Par "<<vertex<<" child "<<child<<'\n';
        if (vis[child])
        {
            continue;
        }
        dfs(child);
    }
    
}


//------------------------------------------------------------------------------
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
  int c=0;
  for (int i = 1; i <=n; i++)
  {
    if (vis[i])
    {
        continue;
    }
    current_cc.clear();
    dfs(i);
    cc.push_back(current_cc);
  }
  //cout<<cc.size()<<'\n';
  for(auto c_cc:cc){
    for(auto ver:c_cc){
        cout<<ver<<" ";
    }
    cout<<'\n';
  }
  cout<<"Total connected component "<<cc.size()<<'\n';
  
return 0;
}