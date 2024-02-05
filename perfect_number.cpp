//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;
ll mod = 10e9 + 7;

//------------------------------------------------------------------------------
ll b(ll sum){
    int t=0;
    while (sum)
    {
        int a=sum%10;
        t+=a;
        sum/=10;
    }
    if (t!=10)
    {
        return 1;
    }
    else
    {
        return 9;
    }
    
}
void solve(void)
{
    int n;
    cin>>n;
    ll ans=19;
    for (int i = 1; i <n; i++)
    {
        ans+=9;
        if (b(ans)==1)
        {
            i--;
        }
    }
    cout<<ans<<'\n';
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