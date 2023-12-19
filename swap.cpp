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
    int lo=0,la=0;
    string s;
    cin>>s;
    ll l=s.length();
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='0')
        {
            lo++;
        }
        else
        la++;
    }
    if (la==lo)
    {
        cout<<0<<'\n';
        return;
    }
    if ((la+lo)==1)
    {
        cout<<1<<'\n';
        return;
    }
    for (ll i = 0; i < l; i++)
    {
        if (s[i]=='0')
        {
            if (la==0)
            {
                break;
            }
            
            la--;
        }
        else if (s[i]=='1')
        {
            if (lo==0)
            {
                break;
            }
            lo--;
        }
        
    }
    cout<<la+lo<<'\n';
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