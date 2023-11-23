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
    int n,k,a=0,b=0;
    ll sum=0;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    sort(v.begin(),v.end());
    vector<int>v2;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v2.push_back(x);
    }
    sort(v2.begin(),v2.end(),greater());
    for (int i = 0; i < n; i++)
    {
        if(i<k)
        {
            sum+=max(v[i],v2[i]);
        }
        else
        {
            sum+=v[i];
        }
    }
    cout<<sum<<"\n";
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