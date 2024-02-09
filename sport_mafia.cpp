//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll= long long ;
ll mod = 10e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    ll n,k;
    cin>>n>>k;
    ll i=0,j=n;
    while (i<=j)
    {
        ll a=i+(j-i)/2;
        if ((((n-a)*(n-a+1))/2)-a==k)
        {
            cout<<a<<'\n';
            return;
        }
        else if ((((n-a)*(n-a+1))/2)-a<k)
        {
            j=a-1;
        }
        else
        {
            i=a+1;
        }
        
    }
    
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