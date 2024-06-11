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
    ll c=0,h=0,p=0,n,m;
    cin>>n>>m;
    char s[n][m];
    for (int i = 0; i <n; i++)
    {
        c=0;
        for (int j = 0; j<m; j++)
        {
            cin>>s[i][j];
            if (s[i][j]=='#')
            {
                c++;
            }
        }
        if (c>h)
        {
            p=i;
            h=c;
        }
    }
    ll f=0,l=0;
    for (int i = 0; i < m; i++)
    {
        if (s[p][i]=='#')
        {
            f=i;
            break;
        }
        
    }
    for (int i =m-1; i>=0; i--)
    {
        if (s[p][i]=='#')
        {
            l=i;
            break;
        }
        
    }
    ll cy=(f+l)/2;
    cy++;
    p++;
    cout<<p<<" "<<cy<<'\n';
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