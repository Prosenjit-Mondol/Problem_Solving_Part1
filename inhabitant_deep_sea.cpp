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
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
    }
    int c=0,f=0,l=n-1;
    for (int i = 1; i <=k; i++)
    {
        if (i%2)
        {
            v[f]=v[f]-1;
            if (v[f]==0)
            {
                c++;
                f++;
            }
        }
        else
        {
            v[l]=v[l]-1;
            if (v[l]==0)
            {
                c++;
                l--;
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