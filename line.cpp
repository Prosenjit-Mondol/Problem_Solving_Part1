
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
    string s;
    cin>>n>>s;
    ll total=0;
    vector<ll>v;
    for (int i = 0; i < n; i++)
    {
        if (s[i]=='L')
        {
            v.push_back(n-i-1-i);
            total+=i;
        }
        else
        {
            v.push_back(i-n+1+i);
            total+=(n-1-i);
        }
          
    }
    sort(v.begin(),v.end(),greater<ll>());
    for (int i = 0; i <n; i++)
    {
       if (v[i]>0)
       {
        total+=v[i];
       }
       cout<<total<<" ";
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