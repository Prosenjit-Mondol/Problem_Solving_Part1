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
    int p=0,r=0,z=0,f=0,n;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
    }
    ll neg = max(0LL, v[1]);
    for (int i = 0; i+2< n; i++)
    {
        ll d=max(0LL,v[i]);
        v[i]-=d;
        v[i+1]-=2*d;
        v[i+2]-=d;
    }
    for (int i = 0; i <n; i++)
    {
        cout<<v[i]<<" ";
        if (v[i]!=0)
        {
            cout<<"NO"<<'\n';
            return;
        }
        
    }
    cout<<"YES"<<'\n';

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