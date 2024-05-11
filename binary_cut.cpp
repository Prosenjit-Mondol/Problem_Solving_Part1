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
    string s;
    set<char>st;
    cin>>s;
    s.erase(unique(s.begin(),s.end()),s.end());
    //cout<<s;
    if (s.size()==2)
    {
        if (s[0]=='0')
        {
            cout<<1<<'\n';
        }
        else
        cout<<2<<'\n';
        return;
    }
    cout<<s.size()-1<<'\n';
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