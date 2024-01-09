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
    int  n;
    cin>>n;
    int x=0;
    vector<ll>v;
    for(int i=0;i<n-1;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
    }
    cout<<v[0]<<" ";
    for (int i = 1; i <n-1; i++)
    {
        int r=min(v[i-1],v[i]);
        cout<<r<<" ";
    }
    
    cout<<v[n-2]<<"\n";
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