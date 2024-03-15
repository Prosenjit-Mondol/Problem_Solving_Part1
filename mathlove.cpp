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
    ll lo=1,hi=1e6,mi=(lo+hi)/2;
    while (lo<=hi)
    {
        mi=(lo+hi)/2;
        ll r=mi*(mi+1)/2;
        if(r==n)
        {
            cout<<mi<<'\n';
            return;
        }
        else if (r>n)
        {
            hi=mi-1;
        }
        else if (r<n)
        {
            lo=mi+1;
        }
        
    }
    cout<<"NAI"<<'\n';
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