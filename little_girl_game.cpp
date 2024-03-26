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
    map<char,int>mp;
    for (int i = 0; i <s.length(); i++)
    {
        mp[s[i]]++;
    }
    int c=0;
    for(auto&x:mp)
    {
        if(x.second%2)
        c++;
    }
    if (c==0||c%2)
    {
        cout<<"First"<<'\n';
    }
    else
    {
        cout<<"Second"<<'\n';
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