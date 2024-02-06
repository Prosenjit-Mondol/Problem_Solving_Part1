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
    int f=0,l=0,n;
    cin>>n;
    string s;
    cin>>s;
    for (int i = 0; i <n; i++)
    {
        if (s[i]=='B')
        {
            f=i;
            break;
        }
        
    }
    for (int i = n-1; i>=0; i--)
    {
        if (s[i]=='B')
        {
            l=i;
            break;
        }
        
    }
    cout<<(l-f+1)<<'\n';
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