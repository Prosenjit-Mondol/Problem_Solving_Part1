//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int f=0,n,m;
    cin>>n>>m;
    map<pair<int,int>,bool>mp;
    for (int i = 0; i < m; i++)
    {
        int a,b;
        cin>>a>>b;
        if (mp[{a,b}])
        {
            f=1;
        }
        mp[{a,b}]=1;
    }
    if (f)
    {
        cout<<"impossible"<<'\n';
    }
    else
    {
        cout<<"possible"<<'\n';
    }
    
}


//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll k=1,t=1;
  cin>>t;
    while(t--)
     {
        cout<<"Scenario #"<<k<<": ";
       solve();
       k++;
     }
return 0;
}