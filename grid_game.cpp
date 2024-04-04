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
    int n,m,s1,s2;
    cin>>n>>m>>s1>>s2;
    map<int,int>mp;
    // for (int i =1; i <=n; i++)
    // {
    //     if ((s1+2-i)<=s1)
    //     {
    //         mp[s1+2-i]=i;
    //     }
    // }
    for (int i =1; i <=m; i++)
    {
        if (mp[i]==(s2+2-i+1-n))
        {
           cout<<(s2+2-i+1-n)<<" "<<i<<'\n';
        }
        
    }
}


//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}