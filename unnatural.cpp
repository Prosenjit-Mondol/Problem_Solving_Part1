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
    string s;
    cin>>s;
    vector<char>v;
    for (int i = 0; i <n; i+=2)
    {
        v.push_back(s[i]);
        v.push_back(s[i+1]);
        if (s[i+2]!='a'||s[i+2]!='e')
        {
            if (s[i+3]=='a'||s[i+3]=='e')
            {
                v.push_back('.');
            }
            else
            {
                v.push_back(s[i+2]);
                v.push_back('.');
                i+=1;
            }
        }
    }
    if (v[v.size()-3]==s[n-1])
    {
        for (int i = 0; i < v.size()-2; i++)
        {
          cout<<v[i];
        }
    
        cout<<'\n';
    }
    else
    {
    for (int i = 0; i < v.size()-1; i++)
    {
        cout<<v[i];
    }
    
    cout<<'\n';
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