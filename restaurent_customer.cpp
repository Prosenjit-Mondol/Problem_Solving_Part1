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
    ll n;
    cin>>n;
    vector<ll>a,b;
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        a.push_back(x);
        b.push_back(y);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0,j=0,ma=0,ans=0;
    while (i<n&&j<n)
    {
        if (a[i]<b[j])
        {
            ans++;
            ma=max(ma,ans);
            i++;
        }
        else
        {
            j++;
            ans--;
        }
    }
    cout<<ma<<'\n';
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