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
    int f=0,n;
    cin>>n;
    string a,b,c;
    cin>>a>>b>>c;
    if (a==c||b==c)
    {
        cout<<"NO"<<'\n';
    }
    else
    {
        for (int i = 0; i <n; i++)
        {
            if (a[i]==c[i]||b[i]==c[i])
            {
                f++;
            }
        }
       if(f==n)
       cout<<"NO"<<'\n';
       else
       cout<<"YES"<<'\n'; 
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