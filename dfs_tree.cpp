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
vector<int>g[N];
int hight[N],depth[N];

void dfs(int vertex,int par){

    for (int child : g[vertex])
    {
        if (child==par)
        {
            continue;
        }
        depth[child]=depth[vertex]+1;
        dfs(child,vertex);
        hight[vertex]=max(hight[vertex],hight[child]+1);
    }
    
}



//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
for (int i = 0; i < n-1; i++)
{
    int a,b;
    cin>>a>>b;
    g[a].push_back(b);
    g[b].push_back(a);
}
dfs(1,0);
  for (int i =1; i <=n; i++)
  {
    cout<<depth[i]<<" "<<hight[i]<<'\n';
  }
  
return 0;
}