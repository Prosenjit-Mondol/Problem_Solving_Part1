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
    ll n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    sort(v.begin(),v.end());
    vector<int>ma;
    vector<int>mi;
    mi.push_back(abs(v[0]-v[1]));
    ma.push_back(abs(v[0]-v[n-1]));
    for (int i =1; i < n-1; i++)
    {
        mi.push_back(min(abs(v[i]-v[i-1]),abs(v[i]-v[i+1])));
        ma.push_back(max(abs(v[i]-v[0]),abs(v[i]-v[n-1])));
    }
    mi.push_back(abs(v[n-1]-v[n-2]));
    ma.push_back(abs(v[0]-v[n-1]));
    for (int i = 0; i < n; i++)
    {
        cout<<mi[i]<<" "<<ma[i]<<"\n";
    }
    
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}