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
    int c=0,n;
    cin>>n;
    map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    
    for (int i = 1; i <=n; i++)
    {
        if (mp[i]==0)
        {
            c++;
        }
        
    }
    
    cout<<c<<'\n';
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