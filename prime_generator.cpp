//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
bool ispriem(long long a)
{
    if(a<2)
    return 0;
    else if(a==2)
    return 1;
    else if(a%2==0)
    return 0;
    else
    {
        for(int i=3;i<=(a+1)/i;i+=2)
        {
            if(a%i==0){
            return 0;
            }
        }
        return 1;
    }
    return 0;
}
void solve(void)
{
    ll n,m;
    cin>>n>>m;
    for (ll i = n; i <=m; i++)
    {
        if(ispriem(i)){
            cout<<i<<'\n';
        }
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