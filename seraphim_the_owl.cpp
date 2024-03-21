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
    ll cost=0,mn=1e15,n,m;
    cin>>n>>m;
    vector<ll>a;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        a.push_back(o);
    }
    vector<ll>b;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        b.push_back(o);
    }
    for (int i =m; i <n; i++)
    {
        cost+=min(a[i],b[i]);
    }
    for (int i =m-1; i>=0; i--)
    {
        mn=min(mn,cost+a[i]);
        cost+=b[i];
    }
    cout<<mn<<'\n';
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