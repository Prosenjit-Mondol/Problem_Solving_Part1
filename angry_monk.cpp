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
    ll r=0,t=0,c=0,ma=0,n,k;
    cin>>n>>k;
    vector<ll>v;
    for(int i=0;i<k;i++)
    {
        ll o;
        cin>>o;
        ma=max(ma,o);
        if (o==1)
        {
            c++;
        }
        else
        {
            v.push_back(o);
        }
        
    }
    if (ma+c>=n)
    {
        cout<<(n-k)<<'\n';
        return;
    }
    ma+=c;
    r=c;
    sort(v.begin(),v.end());
    for (int i = 0; i <k-1; i++)
    {
        if (ma+v[i]<n)
        {
             r=r+(2*v[i]-1);
             ma+=v[i];
        }
        else
        {
            if (n-ma==v[i])
            {
                r=r-1+(n-ma)*2;
            }
            else
            r=r+(n-ma)*2;
            cout<<r<<'\n';
            return;
        }
        
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