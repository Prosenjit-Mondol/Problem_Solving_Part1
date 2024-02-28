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
    int m=inf,n;
    cin>>n;
    map<int,int>mp;
    for (int i = 0; i <n; i++)
    {
        int x;
        cin>>x;

       mp.insert(pair<ll,ll>(x,mp[x]++));
       m=min(m,x);
    }
    if (mp[m]==1)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        for(auto&x:mp)
        {
            if (x.first%m!=0)
            {
                cout<<"YES"<<'\n';
                return;
            }
            
        }
        cout<<"NO"<<'\n';
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