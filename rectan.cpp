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
    ll a,b;
    cin>>a>>b;
    if (a%2!=0 && b%2!=0)
    {
        cout<<"No"<<'\n';
    }
    else if((a%2!=0 && b%2==0)||(a%2==0 && b%2!=0))
    {
        if (a%2==0&&a/2==b)
        {
            cout<<"No"<<'\n';
        }
        else if (b%2==0&&b/2==a)
        {
            cout<<"No"<<'\n';
        }
        else
        {
            cout<<"Yes"<<'\n';
        }
        
    }
    else
    cout<<"Yes"<<'\n';
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