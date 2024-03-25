//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
int N=1e9;
void dfs(int node,int par=-1){
    // entering the node

    cout<<node<<" ";

    for(auto child : gh[node]){
        if (child==par) continue;
        dfs(child,node);
        
    }

    //exiting node
}


//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
vector<int>gh(N);
  int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        int a,b;
        cin>>a>>b;
        gh[a].push_back(b);
        gh[b].push_back(a);
    }
    dfs(1);


   return 0;
}