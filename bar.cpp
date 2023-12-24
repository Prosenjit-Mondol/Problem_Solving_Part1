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
    int f=0,c=0,n;
    cin>>n;

    string s[12]={"ABSINTH","BEER","BRANDY","CHAMPAGNE","GIN","RUM","SAKE","TEQUILA","VODAK","WHISKEY","WINE"};
    string q[n+1];
    for (int i = 0; i < n; i++)
    {
        cin>>q[i];
    }



    for (int i = 0; i < n; i++)
    {
        for (int j= 0; j< 11; j++)
        {
            if (q[i]==s[j])
            {
                f=1;
                c++;
                cout<<q[i]<<" ";
            }
        }
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