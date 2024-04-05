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
    string s,t;
    cin>>s>>t;
    int a=s.length();
    int b=t.length();
    int lcm=(a*b)/(__gcd(a,b));
    a=lcm/a;
    b=lcm/b;
    string aa,bb;
    for (int i = 0; i <a; i++)
    {
        aa+=s;
    }
    for (int i = 0; i <b; i++)
    {
        bb+=t;
    }
    if (aa==bb)
    {
        cout<<aa<<'\n';
    }
    else
    {
        cout<<-1<<'\n';
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