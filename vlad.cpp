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
    int a;
    string s;
    cin>>s;
    for (int i = 0; i < 5; i++)
    {
        if (s[i]=='A')
        {
            a++;
        }
        
    }
    if (a>=3)
    {
        cout<<"A"<<'\n';
    }
    else
    cout<<"B"<<'\n';
    a=0;
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