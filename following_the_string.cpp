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
    int n;
    cin>>n;
    vector<int>v;
    vector<char>ch;

    map<int,int>mp;
    for (int i = 0; i <n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
       mp.insert(pair<int,int>(a,0));
    }
    for (int i = 0; i <n; i++)
    {
        if (mp[v[i]])
        {
            
            ch.push_back('a'+mp[v[i]]);
            mp[v[i]]++;
        }
        else
        {
            ch.push_back('a');
            mp[v[i]]++;
        }
    }
    for(auto element : ch)
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