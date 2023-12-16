//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define yes cout<<endl;
#define no cout<<endl;
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

//------------------------------------------------------------------------------

void solve(void)
{
    int n,m;
    cin>>n>>m;
    int ans=min(n,m);
    ans+=abs(m-n);
    cout<<ans<<'\n';
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