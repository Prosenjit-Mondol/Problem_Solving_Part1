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
    ll sum=0;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int o;
        cin>>o;
        v.push_back(o);
        sum+=o;
    }
    if (sum%3==0)
    {
        cout<<0<<'\n';
    }
    else if (sum%3==2)
    {
        cout<<1<<'\n';
    }
    else
    {
        for(auto el : v)
        {
            if (el%3==1)
            {
                cout<<1<<'\n';
                return;
            }
            
        }
        
        cout<<2<<'\n';
        
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