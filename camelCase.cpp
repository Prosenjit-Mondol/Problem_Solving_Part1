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
    int c=1;
    string s;
    cin>>s;

    if (s[0]>='A'&&s[0]<='Z')
    {
        cout<<"NO"<<'\n';
        return;
    }
    
    for (int i = 0; i <s.length(); i++)
    {
        if (s[i]>='A'&&s[i]<='Z')
        {
            c++;
        }
        else if (s[i]>='a'&&s[i]<='z')
        {
            /* code */
        }
        else
        {
            cout<<"NO"<<'\n';
            return;
        }
        
    }
    if (c>7)
    {
        cout<<"NO"<<'\n';
    }
    else
    {
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