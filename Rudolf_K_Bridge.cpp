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
    ll x,n,m,k,d,l=0;
    cin>>n>>m>>k>>d;
    vector<ll>v(n,0);
    for (int  t=0;t<n;t++)
    {
        vector<ll>vec(m,0);
        multiset<ll>s;
        ll po=0;
        cin>>x;
        vec[0]=1;
        s.insert(1);
        for (int i = 1; i <m; i++)
        {
            cin>>x;
            vec[i]=x+1+(*s.begin());
            s.insert(vec[i]);
            if(i>d){
                s.erase(s.find(vec[po++]));
            }
        }
        v[t]=vec[m-1];
    }

    int r=0,sum=0;
    for (int i = 0; i < k; i++)
    {
        sum+=v[i];
    }
    r=sum;
    for (int i = k; i <n; i++)
    {
        sum=sum+(v[i]-v[i-k]);
        r=min(r,sum);
    }
    cout<<r<<'\n';
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