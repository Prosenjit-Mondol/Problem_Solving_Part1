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
    string s;
    int n;
    cin>>s>>n;
    set<char>se;
    for(int i=0;i<s.length();i++)
    {
    char x=s[i];
    se.insert(x);
    }
    int l=se.size();
    if (n>s.length())
    {
        cout<<"impossible"<<'\n';
    }
    else if (l==n)
    {
        cout<<0<<"\n";
    }
    else
    {
        int v=(n-l);
        if (v>0)
        {
            cout<<v<<'\n';
        }
        else
        cout<<0<<'\n';
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