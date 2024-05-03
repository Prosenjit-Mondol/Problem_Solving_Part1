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
    ll cb,cs,n,k,pb,ps,spb=0,sps=0;
    cin>>n>>k>>pb>>ps;
    vector<ll>p;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        p.push_back(o);
    }
    vector<ll>a;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        a.push_back(o);
    }
    spb=a[pb-1];
    sps=a[ps-1];
    cb=p[pb-1];
    cs=p[ps-1];
    for (int i = 1; i < k; i++)
    {
        if (a[cb-1]>a[pb-1])
        {
            spb+=a[cb-1];
            pb=cb;
            cb=p[cb-1];
        }
        else
        {
            spb+=a[pb-1];
        }
        if (a[cs-1]>a[ps-1])
        {
            sps+=a[cs-1];
            ps=cs;
            cs=p[cs-1];
        }
        else
        {
            sps+=a[ps-1];
        }
    }
    if (spb>sps)
    {
        cout<<"Bodya"<<'\n';
    }
    else if (spb<sps)
    {
        cout<<"Sasha"<<'\n';
    }
    else
    {
        cout<<"Draw"<<'\n';
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