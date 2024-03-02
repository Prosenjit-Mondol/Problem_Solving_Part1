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
    int f=0,n;
    cin>>n;
    string a,b,s;
    cin>>a>>b;
    int ma=n,mi=1;
    for (int i = 0; i <=n; i++)
    {
        if (f==1)
        {
            s+=b[i];
        }
        else if (a[i]=='1'&&b[i]=='0')
        {
            s+=a[i];
            s+=b[i];
            f=1;
        }
        else if (a[i]=='0'&&b[i]=='0')
        {
            s+=a[i];
            s+=b[i];
            f=1;
        }
        else
        {
            s+=a[i];
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