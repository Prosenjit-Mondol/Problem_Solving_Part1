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
    string p,s;
    cin>>s;
    map<char,int>mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    for(auto&x:mp)
    {
        if (x.second%n)
        {
            cout<<-1<<'\n';
            return;
        }
        else
        {
            int l=x.second/n;
            for (int i = 0; i < l; i++)
            {
                p+=x.first;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<p;
    }
    cout<<'\n';
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