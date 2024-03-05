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
    string s;
    cin>>s;
    if (s.length()==1)
    {
        cout<<s<<'\n';
        return;
    }
    
    char a,b;
    a=s[0];
    b=s[s.length()-1];
    
    
    if (a<=b)
    {
        cout<<s<<'\n';
    }
    else
    {
        for (int i =s.length()-1; i>=0; i--)
        {
            cout<<s[i];
        }
        cout<<s<<'\n';
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