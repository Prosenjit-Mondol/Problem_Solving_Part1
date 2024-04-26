//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;
const int N=1e3+10;
int gr[N][N];

//------------------------------------------------------------------------------

void solve(void)
{
    int n,m;
    cin>>n>>m;
    for (int i = 0; i <m; i++)
    {
        int a,b;
        cin>>a>>b;
        gr[a][b]=1;
        gr[b][a]=1;
    }
    
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