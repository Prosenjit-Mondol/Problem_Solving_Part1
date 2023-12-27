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
    int k=0,n;
    cin>>n;
    string s;
    cin>>s;
    int C=0,c=0;
    for (int i = 0; i < n; i++)
    {
        if (s[i]=='X')
        {
            C++;
        }
        else
        {
            c++;
        }
        
    }
    if (c==n/2)
    {
        cout<<0<<'\n'<<s<<'\n';
    }
    else
    {
        int m=min(C,c);
        int r=n/2-m;
        cout<<r<<'\n';
        if (C>c)
        {
            for (int j = 1; j <=r;j++)
            {
                for (int i = 0; i <n; i++)
                {
                    if (s[i]=='X')
                    {
                        s[i]='x';
                        break;
                    }
                }
            }
        }
        else
        {
            for (int j = 1; j <=r;j++)
            {
                for (int i = 0; i <n; i++)
                {
                    if (s[i]=='x')
                    {
                        s[i]='X';
                        break;
                    }
                }
            }
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
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}