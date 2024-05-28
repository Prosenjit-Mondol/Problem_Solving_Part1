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
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int cn=0,f=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
                cn++;
            if(s[i]=='1'&&s[i+1]=='1')
            {
                f=1;
            }
        }
        if(cn==2&&f==1)
        {
           cout<<"NO\n";
        }
        if(cn%2==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
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