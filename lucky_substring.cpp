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
    string s;
    cin>>s;
    int se=0,fo=0;
    for (int i = 0; i <s.length(); i++)
    {
        if (s[i]=='4')
        {
            fo++;
        }
        if (s[i]=='7')
        {
            se++;
        }
        
    }
    if (fo>=se&&fo!=0)
    {
        cout<<4<<'\n';
    }
    else if (se)
    {
        cout<<7<<'\n';
    }
    else
    {
        cout<<-1<<'\n';
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