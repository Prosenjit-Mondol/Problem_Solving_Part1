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
    int r=0,c=0,n,m;
    cin>>n>>m;
    string s1,s2;
    cin>>s1>>s2;
    for (int i = 0; i < n; i++)
    {
        if (s1[i]!='*')
        {
            for (int j= 0; j<m; j++)
            {
                if (s1[i]==s2[j])
                {
                    s2[j]='0';
                    s1[i]='0';
                    r++;
                }
            }
            
        }
        else
        {
            c++;
        }
        
    }
    if((r+c)==n)
    cout<<"YES"<<'\n';
    else
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