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
    set<char>st;
    cin>>s;
    int r=0,c=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='0')
        {
           c++;
        }
        st.insert(s[i]);
    }
    if (st.size()==1)
    {
        cout<<1<<'\n';
    }
    else
    {
        for (int i = 0; i < c; i++)
        {
            if (s[i]=='1')
            {
                r++;
            }
        }
        cout<<(r+1)<<'\n';
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