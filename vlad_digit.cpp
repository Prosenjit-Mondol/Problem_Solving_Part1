//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

ll last=2e5+10;
vector<ll> v(last+1);
ll sum=0;
for (int i = 1; i <=last; i++)
{
    ll a=i;
    ll ans=0;
    while (a)
    {
        ans+=a%10;
        a/=10;
    }
    sum+=ans;
    v[i]=sum;
}
  ll t;
  cin>>t;
    while(t--)
     {
       ll n;
       cin>>n;
       cout<<v[n]<<'\n';
     }
return 0;
}