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
    int n,m;
    cin>>n>>m;
    int a[n];
    vector<ll>vv;
    ll s=0,r=0,sum=0;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    for (int i = 0; i <m; i++)
    {
        for (int j=a[i];j>=1;j--)
        {
            vv.push_back(j);
        }
        
    }
    for (int i = 0; i <n; i++)
    {
        r+=vv[i];
    }
    sort(vv.rbegin(),vv.rend());
    for (int i = 0; i <n; i++)
    {
        s+=vv[i];
    }
    cout<<s<<" "<<r<<'\n';
    
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