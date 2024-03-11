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
    int d=0,c=0;
    for (int i = 0; i < n-2; i++)
    {
        if ((s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p')||(s[i]=='p'&&s[i+1]=='i'&&s[i+2]=='e'))
        {
            c++;
        }
        if ((s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p')&&(s[i+2]=='p'&&s[i+3]=='i'&&s[i+4]=='e'))
        {
            d++;
        }
        
    }
    cout<<(c-d)<<'\n';
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