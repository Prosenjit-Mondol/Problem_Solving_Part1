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
    ll n;
    cin>>n;
    string s,ss="";
    cin>>s;
    set<char>st;
    for(auto it : s) st.insert(it);
    map<char,char>mp;
    for(auto it : st) ss+=it;
    for (int j=ss.size()-1, i = 0; i <j; i++,j--)
    {
        mp[ss[i]]=ss[j];
        mp[ss[j]]=ss[i];
    }
    for(auto&x:mp)
    {
        cout<<x.second;
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