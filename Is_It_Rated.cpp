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
    int f=0,n;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll o,a;
        cin>>o>>a;
        v.push_back(o);
        if (o!=a)
        {
            f=1;
        }
        
    }
    if (f==1)
    {
        cout<<"rated"<<'\n';
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j= 0; j< i; j++)
            {
                if (v[i]>v[j])
                {
                    cout<<"unrated"<<'\n';
                    return;
                }
                
            }
            
        }
        cout<<"maybe"<<'\n';
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