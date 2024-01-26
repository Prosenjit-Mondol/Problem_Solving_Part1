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
    string s;
    cin>>s;
    int l=s.length();
    for (int i = 0; i < l-1; i++)
    {
        if ((s[i]=='a'&&s[i+1]=='a')||(s[i]=='b'&&s[i+1]=='b')||(s[i]=='c'&&s[i+1]=='c'))
        {
            cout<<-1<<'\n';
            return;
        }
        
    }
    
    if (s[0]=='?')
    {
        if (s[1]=='a')
        {
            s[0]='b';
        }
        else if (s[1]=='b')
        {
            s[0]='a';
        }
        else
        {
            s[0]='c';
        }
        
    }
    else if (s[l-1]=='?')
    {
        if (s[l-2]=='a')
        {
            s[l-1]='b';
        }
        else if (s[l-2]=='b')
        {
            s[l-1]='a';
        }
        else
        {
            s[l-1]='c';
        }
        
    }
    else
    {
        for (int i = 1; i <l-1; i++)
        {
            if (s[i]=='?')
            {
                if (s[i-1]=='a'&& s[i+1]=='?')
                {
                    s[i]='b';
                }
                if (s[i-1]=='a'&&s[i+1]=='a')
                {
                    s[i]='b';
                }
                if (s[i-1]=='a'&&s[i+1]=='b')
                {
                    s[i]='c';
                }
                if (s[i-1]=='a'&&s[i+1]=='c')
                {
                    s[i]='b';
                }
                if (s[i-1]=='b'&& s[i+1]=='?')
                {
                    s[i]='a';
                }
                if (s[i-1]=='b'&&s[i+1]=='a')
                {
                    s[i]='c';
                }
                if (s[i-1]=='b'&&s[i+1]=='b')
                {
                    s[i]='c';
                }
                if (s[i-1]=='b'&&s[i+1]=='c')
                {
                    s[i]='a';
                }
                if (s[i-1]=='c'&& s[i+1]=='?')
                {
                    s[i]='b';
                }
                if (s[i-1]=='c'&&s[i+1]=='a')
                {
                    s[i]='b';
                }
                if (s[i-1]=='c'&&s[i+1]=='b')
                {
                    s[i]='a';
                }
                if (s[i-1]=='c'&&s[i+1]=='c')
                {
                    s[i]='b';
                }
            }
            
        }
        
    }
    cout<<s<<'\n';
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