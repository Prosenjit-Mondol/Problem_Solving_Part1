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
    ll n,q;
    cin>>n>>q;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
    }
    sort(v.rbegin(),v.rend());

    vector<int>temp(inf);
    vector<pair<int,int>>vp;
    for (int i = 0; i < q; i++)
    {
        int l,r;
        cin>>l>>r;
        vp.push_back({l,r});
        temp[l]++;
        temp[r+1]--;
    }

    for (int i = 1; i <=n; i++)
    {
        temp[i]+=temp[i-1];
    }


    vector<pair<int,int>>vp2;
    for (int i =1; i <=n; i++)
    {
        vp2.push_back({temp[i],i});
    }
    sort(vp2.rbegin(),vp2.rend());


    vector<ll>re(inf);
    for(int i=0;i<n;i++)
    {
        re[vp2[i].second]=v[i];
    }

    for (int i =1; i <n+5; i++)
    {
        re[i]+=re[i-1];
    }


    ll ans=0;
    for (int i = 0; i <q; i++)
    {
        int a=vp[i].second,b=vp[i].first;
        ans+=re[a]-re[b-1];

    }
    cout<<ans<<'\n';
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