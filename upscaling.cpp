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
    for (int i = 1; i <=n; i++)
    {
        string s;
        for (int j= 1; j<=n; j++)
        {
            if ((i%2&&j%2)||(i%2==0&&j%2==0))
            {
                s+="##";
            }
            else if((i%2&&j%2==0)||(i%2==0&&j%2))
            s+="..";
        }
        cout<<s<<'\n'<<s<<'\n';
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