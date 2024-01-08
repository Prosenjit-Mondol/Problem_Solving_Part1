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
    int n,m,c=0;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        vector<int>v;
        for(int i=0;i<m*2;i++)
        {
            ll o;
            cin>>o;
            v.push_back(o);
        }
        for (int i = 0; i <m*2; i+=2)
        {
            if (v[i]==1 || v[i+1]==1)
            {
                c++;
            }
            
        }
        
    }
    cout<<c<<'\n';
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