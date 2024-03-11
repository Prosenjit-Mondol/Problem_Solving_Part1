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
    int n,m,k;
    cin>>n>>m>>k;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
    }
    sort(v.begin(),v.end());
    vector<ll>v2;
    for(int i=0;i<m;i++)
    {
        ll o;
        cin>>o;
        v2.push_back(o);
    }
    sort(v2.begin(),v2.end());
    int c=0;

    if (v[0]>=k||v2[0]>=k)
    {
        cout<<0<<'\n';
        return;
    }
    for (int i = 0; i <n; i++)
    {
        for (int j= 0; j< m; j++)
        {
            if ((v[i]+v2[j])<=k)
            {
                c++;
            }
            
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
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}