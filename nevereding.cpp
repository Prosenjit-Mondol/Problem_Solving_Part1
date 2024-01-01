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
    int n;
    cin>>n;
    string r,s;
    cin>>s;
    for (int i = 0; i < n; i++)
    {
        cin>>r;
    }
    int l=r.length();
    if (r[l-1]==s[2]&&r[l-2]==s[1]&&r[l-3]==s[0])
    {
        cout<<"home"<<'\n';
    }
    else
    {
        cout<<"contest"<<'\n';
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