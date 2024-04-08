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
    ll j,mi=INT_MAX,n,c,d;
    cin>>n>>c>>d;
    map<ll,ll>mp;
    for (int i = 0; i <n*n; i++)
    {
       ll x;
       cin>>x;
       mp[x]++;
       mi=min(mi,x);
    }
    ll st[n+1][n+1];
    st[0][0]=mi;
    for (int i = 0; i <n; i++)
    {
        for (j= 1; j<n; j++)
        {
            st[i][j]=st[i][j-1]+d;
            if (mp[st[i][j]]==0)
            {
                cout<<"NO"<<'\n';
                return;
            }
            mp[st[i][j]]--;
        }
        st[i+1][0]=st[i][0]+c;
        if (mp[st[i][0]]==0)
        {
                cout<<"NO"<<'\n';
                return;
        }
        mp[st[i][0]]--;
    }

// for(auto&x:mp)
// {
//     cout<<x.first<<" "<<x.second<<'\n';
// }
    // for (int i = 0; i <n; i++)
    // {
    //     for (int j= 0; j<n; j++)
    //     {
    //         cout<<st[i][j]<<" ";
    //     }
    //     cout<<'\n';
    // }

    cout<<"YES"<<'\n';
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