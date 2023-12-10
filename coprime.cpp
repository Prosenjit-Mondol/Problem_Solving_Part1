#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=long long ;

void solve(void)
{
    ll sum=-1,n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
    }
    for (int  i = n-1; i>=0; i--)
    {
      for (int j= i; j>=0; j--)
      {
        int g=__gcd(v[i],v[j]);
        if (g==1)
        {
          ll vc=i+j+2;
          sum=max(sum,vc);
        }
      }  
    }
    cout<<sum<<"\n";
}


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