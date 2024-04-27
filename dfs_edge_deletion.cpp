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
int subtree_sum[N];
int vul[N];
int even_ct[N];

void dfs(int vertex,int par){

if (vertex%2==0)
{
    even_ct[vertex]++;
}

    subtree_sum[vertex]+=vertex;//vul[vertex];
    for (int child : g[vertex])
    {
        if (child==par)
        {
            continue;
        }
        dfs(child,vertex);
        subtree_sum[vertex]+=subtree_sum[child];
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
ll ans=0;
for (int i = 2; i <=n; i++)
{
    int p1=subtree_sum[i];
    int p2=subtree_sum[1]-p1;
    ans=max(ans,(p1*1LL*p2)%mod);
}

cout<<ans<<'\n';
return 0;
}