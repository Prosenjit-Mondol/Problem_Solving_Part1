//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long int;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    ll n,q;
    string a,b;
    cin>>n>>q>>a>>b;
    for (int i = 0; i < q; i++)
    {
        ll l,u;
        cin>>l>>u;
        map<char,int>mp;
        for (int j = l-1; j< u; j++)
        {
            mp[a[j]]++;
        }
        
        for (int j = l-1; j< u; j++)
        {
            mp[b[j]]--;
        }

        ll sum=0;
        for(auto&x:mp)
        {
            if(x.second>0)
            sum+=x.second;
        }
        cout<<sum<<'\n';
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