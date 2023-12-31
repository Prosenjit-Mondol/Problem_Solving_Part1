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
    int f=0,i,n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    vector<char>v;
    for (i =0; i<n; i++)
    {
        if (s[i]<c)
        {
            f=1;
            v.push_back(c);
            break;
        }
        else
        {
            v.push_back(s[i]);
        }
    }
    for ( int j=i;j<n; j++)
    {
        v.push_back(s[j]);
    }
    if (f==0)
    {
        v.push_back(c);
    }
    
    for(auto element : v)
    {
    cout<<element;
    }
    
    cout<<'\n';
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