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
    vector<array<int,26>>v(n+1);
    for (int i = 0; i < n; i++)
    {
        v[i+1]=v[i];
        v[i+1][a[i]-'a']++;
        v[i+1][b[i]-'a']--;
    }

    

    for (int i = 0; i < q; i++)
    {
        ll ans=0,l,u;
        cin>>l>>u;
        l--;
        for (int i = 0; i < 26; i++)
        {
            ans+=max(0,v[u][i]-v[l][i]);
        }
        cout<<ans<<'\n';
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