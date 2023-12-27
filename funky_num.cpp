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
    ll n;
    cin>>n;
    int hi=sqrt(n);
    hi*=2;
    int lo=1;
    int mi=(hi+lo)/2;
    while (lo<=hi)
    {
        ll r=((lo*(lo+1))/2)+((hi*(hi+1))/2);
        if (r==n)
        {
            cout<<"YES"<<'\n';
            return;
        }
        else if (r<n)
        {
            lo++;
        }
        else if (r>n)
        {
            hi--;
        }
    }
    cout<<"NO"<<'\n';
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