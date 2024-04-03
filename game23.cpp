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
    if (m%n)
    {
        cout<<-1<<'\n';
    }
    else
    {
        int c=0;
        while (n<m)
        {
            c++;
            ll x=n*3;
            if (m%x==0)
            {
                n=x;
            }
            else
            {
                n=n*2;
            }
            cout<<n<<" ";
            
            
        }
        cout<<c<<'\n';
        
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