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

void dfs(int vertex,int par=-1){

    for (int child : g[vertex])
    {
        if (child==par)
        {
            continue;
        }
        depth[child]=depth[vertex]+1;
        dfs(child,vertex);
        
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
int mx_depth=-1;
int mx_node;
for (int i = 1; i <=n; i++)
{
    if (mx_depth<depth[i])
    {
        mx_depth=depth[i];
        mx_node=i;
    }
    depth[i]=0;//determine max depth from this node;
}
dfs(mx_node);
mx_depth=-1;
for (int i = 1; i <=n; i++)
{
    if (mx_depth<depth[i])
    {
        mx_depth=depth[i];
    }
}
cout<<mx_depth<<'\n';
return 0;
}