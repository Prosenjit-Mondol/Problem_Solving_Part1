//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;
ll mod = 10e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    ll c=0,a=0,b=0,n,m,k;
    cin>>n>>m>>k;
    map<ll,ll>mpa,mpb;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        mpa[a]++;
    }
    for (ll i = 0; i < m; i++)
    {
        ll a;
        cin >> a;
        mpb[a]++;
    }
    for (ll i = 1; i <=k; i++)
    {
        if (mpa[i]>0)
        {
            a++;
            if (mpb[i]>0)
            b++;
        }
        else if (mpb[i]>0)
        {
            b++;
        }
        else
        {
            c++;
            break;
        }
        
    }
    if (c)
    {
        cout << "NO" << '\n';
    }
    
    else if (a>=k/2&&b>=k/2)
    { 
        cout<<"YES"<<'\n';
    }
    else
    {
        cout << "NO" << '\n';
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