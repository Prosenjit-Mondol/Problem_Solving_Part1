#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
#define vi vector<int>v
#define pi pair<int,int>
using namespace std;
using ll=long long ;

void solve(void)
{
    int n,ne=0;
    cin>>n;
    ll sum=0;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
    cin>>v[i];
    if(v[i]<0)
    {
        v[i]=abs(v[i]);
        ne++;
    }
    sum+=v[i];
    }
    sort(v.begin(),v.end());
    if(ne%2!=0)
    sum-=2*v[0];
    cout<<sum<<'\n';
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}