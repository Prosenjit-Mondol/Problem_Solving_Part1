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
//------------------------------------------------------------------------------
bool vis[N];

void dfs(int vertex){
    cout<<vertex<<'\n';
    vis[vertex]=true;
    for(int child:g[vertex]){
        cout<<"parent "<<vertex<<" "<<"child "<<child<<"\n";
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

   int a,b,n,m;
    cin>>n>>m;
    for (int i = 0; i < m; i++)
    {
        
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(a);
return 0;
}