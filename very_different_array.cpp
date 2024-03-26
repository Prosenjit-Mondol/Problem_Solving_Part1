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
    ll n,m;
    cin>>n>>m;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
    }
    sort(v.begin(),v.end());

    vector<ll>vv;
    for(int i=0;i<m;i++)
    {
        ll o;
        cin>>o;
        vv.push_back(o);
    }
    sort(vv.rbegin(),vv.rend());


    ll ans=0,c=0,i=0,j=0;
    while (c<n)
    {
        c++;
        if (abs(vv[i]-v[j])>=abs(vv.back()-v.back()))
        {
            ans+=abs(vv[i]-v[j]);
            i++;
            j++;
        }
        else
        {
            ans+=abs(vv.back()-v.back());
            vv.pop_back();
            v.pop_back();

        }
    }
    cout<<ans<<'\n';
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