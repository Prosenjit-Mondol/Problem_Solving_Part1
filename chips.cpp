//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

//------------------------------------------------------------------------------

void solve(void)
{
    ll va=0,sum=0,sum2=0,n;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
        sum+=o;
    }
    vector<int>v2;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v2.push_back(o);
        sum2+=o;
    }
    sort(v2.begin(),v2.end());
    sort(v.begin(),v.end());
    sum+=(v2[0]*n);
    sum2+=(v[0]*n);
    if (sum<sum2)
    {
        cout<<sum<<'\n';
    }
    else
       cout<<sum2<<'\n';
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