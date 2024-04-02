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
    cin>>s;
    int a=0,b=0;
    for (int i = 0; i <s.size()-1; i++)
    {
        if (s[i]=='A'&&s[i+1]=='B'&&a==0)
        {
            a=1;
            i+=2;
        }
        if (s[i]=='B'&& s[i+1]=='A'&&b==0)
        {
            b=1;
            i+=2;
        }
        if (a==1&&b==1)
       {
           cout<<"YES"<<'\n';
           return;
        }

    }
    if (a!=1||b!=1)
    {
        a=0,b=0;
        for (int i = 0; i <s.size()-1; i++)
    {
        if (s[i]=='B'&& s[i+1]=='A'&&b==0)
        {
            b=1;
            i+=2;
        }
        if (s[i]=='A'&&s[i+1]=='B'&&a==0)
        {
            a=1;
            i+=2;
        }
        
        if (a==1&&b==1)
       {
           cout<<"YES"<<'\n';
           return;
        }

    }
    }
    
    if (a==1&&b==1)
    {
        cout<<"YES"<<'\n';
        return;
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
