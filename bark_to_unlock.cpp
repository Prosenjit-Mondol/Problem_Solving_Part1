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
    string p;
    cin>>p;
    int f=0,n,f1=0,f2=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin>>x;
        if (p==x)
        {
            f=1;
        }
        
        if (p[0]==x[1])
        {
            f1=1;
        }
        if (p[1]==x[0])
        {
            f2=1;
        }
        
    }
    if ((f1==1&&f2==1)||f==1)
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