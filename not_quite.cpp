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
    string a,b,c;
    cin>>a>>b>>c;
    if (a[0]=='?'||a[1]=='?'||a[2]=='?')
    {
        if (a[0]=='?')
        {
            if (a[1]=='A')
            {
                if (a[2]=='B')
                {
                    cout<<'C'<<'\n';
                }
                else
                cout<<'B'<<'\n';
            }
            else if (a[1]=='B')
            {
                if (a[2]=='A')
                {
                    cout<<'C'<<'\n';
                }
                else
                cout<<'A'<<'\n';
            }
            else
            {
                if (a[2]=='B')
                {
                    cout<<'A'<<'\n';
                }
                else
                cout<<'B'<<'\n';
            }
        }
        else if (a[1]=='?')
        {
            if (a[0]=='A')
            {
                if (a[2]=='B')
                {
                    cout<<'C'<<'\n';
                }
                else
                cout<<'B'<<'\n';
            }
            else if (a[0]=='B')
            {
                if (a[2]=='A')
                {
                    cout<<'C'<<'\n';
                }
                else
                cout<<'A'<<'\n';
            }
            else
            {
                if (a[2]=='B')
                {
                    cout<<'A'<<'\n';
                }
                else
                cout<<'B'<<'\n';
            }
        }
        else
        {
            if (a[1]=='A')
            {
                if (a[0]=='B')
                {
                    cout<<'C'<<'\n';
                }
                else
                cout<<'B'<<'\n';
            }
            else if (a[1]=='B')
            {
                if (a[0]=='A')
                {
                    cout<<'C'<<'\n';
                }
                else
                cout<<'A'<<'\n';
            }
            else
            {
                if (a[0]=='B')
                {
                    cout<<'A'<<'\n';
                }
                else
                cout<<'B'<<'\n';
            }
        }
    }
    else if (b[0]=='?'||b[1]=='?'||b[2]=='?')
    {
        if (b[0]=='?')
        {
            if (b[1]=='A')
            {
                if (b[2]=='B')
                {
                    cout<<'C'<<'\n';
                }
                else
                cout<<'B'<<'\n';
            }
            else if (b[1]=='B')
            {
                if (b[2]=='A')
                {
                    cout<<'C'<<'\n';
                }
                else
                cout<<'A'<<'\n';
            }
            else
            {
                if (b[2]=='B')
                {
                    cout<<'A'<<'\n';
                }
                else
                cout<<'B'<<'\n';
            }
        }
        else if (b[1]=='?')
        {
            if (b[0]=='A')
            {
                if (b[2]=='B')
                {
                    cout<<'C'<<'\n';
                }
                else
                cout<<'B'<<'\n';
            }
            else if (b[0]=='B')
            {
                if (b[2]=='A')
                {
                    cout<<'C'<<'\n';
                }
                else
                cout<<'A'<<'\n';
            }
            else
            {
                if (b[2]=='B')
                {
                    cout<<'A'<<'\n';
                }
                else
                cout<<'B'<<'\n';
            }
        }
        else
        {
            if (b[1]=='A')
            {
                if (b[0]=='B')
                {
                    cout<<'C'<<'\n';
                }
                else
                cout<<'B'<<'\n';
            }
            else if (b[1]=='B')
            {
                if (b[0]=='A')
                {
                    cout<<'C'<<'\n';
                }
                else
                cout<<'A'<<'\n';
            }
            else
            {
                if (b[0]=='B')
                {
                    cout<<'A'<<'\n';
                }
                else
                cout<<'B'<<'\n';
            }
        }
    }
    else
    {
        if (c[0]=='?')
        {
            if (c[1]=='A')
            {
                if (c[2]=='B')
                {
                    cout<<'C'<<'\n';
                }
                else
                cout<<'B'<<'\n';
            }
            else if (c[1]=='B')
            {
                if (c[2]=='A')
                {
                    cout<<'C'<<'\n';
                }
                else
                cout<<'A'<<'\n';
            }
            else
            {
                if (c[2]=='B')
                {
                    cout<<'A'<<'\n';
                }
                else
                cout<<'B'<<'\n';
            }
        }
        else if (c[1]=='?')
        {
            if (c[0]=='A')
            {
                if (c[2]=='B')
                {
                    cout<<'C'<<'\n';
                }
                else
                cout<<'B'<<'\n';
            }
            else if (c[0]=='B')
            {
                if (c[2]=='A')
                {
                    cout<<'C'<<'\n';
                }
                else
                cout<<'A'<<'\n';
            }
            else
            {
                if (c[2]=='B')
                {
                    cout<<'A'<<'\n';
                }
                else
                cout<<'B'<<'\n';
            }
        }
        else
        {
            if (c[1]=='A')
            {
                if (c[0]=='B')
                {
                    cout<<'C'<<'\n';
                }
                else
                cout<<'B'<<'\n';
            }
            else if (c[1]=='B')
            {
                if (c[0]=='A')
                {
                    cout<<'C'<<'\n';
                }
                else
                cout<<'A'<<'\n';
            }
            else
            {
                if (c[0]=='B')
                {
                    cout<<'A'<<'\n';
                }
                else
                cout<<'B'<<'\n';
            }
        }
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