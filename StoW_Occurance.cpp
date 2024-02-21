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
    int a=1;
    string ans,temp,s;
    char c;
    cin>>c;
    getline(cin,s);
    s=c+s;
    vector<string>v;
    for(auto u:s)
    {
        if (isspace(u))
        {
            v.push_back(temp);
            temp.clear();
        }
        else
        temp+=u;
    }
    ans=v[0];
    map<string,int>mp;
    for (int  i = 0; i <v.size(); i++)
    {
        mp[v[i]]++;
    }
    for(auto&x:mp)
    {
        if (a<x.second)
        {
            ans=x.first;
            a=x.second;
        }
        
    }
    cout<<ans<<" "<<a<<'\n';
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