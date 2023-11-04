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
    ll n,l;
    cin>>n>>l;
    ll a[n+1];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll r=2*max(a[0],l-a[n-1]);
    for (int i = 0; i <n-1; i++)
    {
        r=max(r,a[i+1]-a[i]);
    }
    printf("%.10f\n",r/2.);
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