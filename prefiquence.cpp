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
    ll c=0,k=0,n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    for (int i = 0; i < a.length(); i++)
    {
        for ( ; k< b.length(); k++)
        {
            if (a[i]==b[k])
            {
                c++;
                b[k]='x';
                break;
            }
            b[k]='x';
        }
        
    }
    cout<<c<<'\n';
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