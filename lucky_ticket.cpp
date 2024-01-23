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
    int fsum=0,lsum=0,n;
    cin>>n;
    int h=n/2;
    string s;
    cin>>s;
    for (int i = 0; i < n; i++)
    {
        
        if (s[i]!='4'&&s[i]!='7')
        {
            cout<<"NO"<<'\n';
            return;
        }
        if (i<h)
        {
            char c=s[i];
            fsum+=(int(c));
        }
        else
        {
            char c=s[i];
            lsum+=(int(c));
        }
        
    }
    if (lsum==fsum)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
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