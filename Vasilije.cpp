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
    ll n,k,x;
    cin>>n>>k>>x;
    ll r1n=(n*(n+1)/2);
    ll r1k=(k*(k+1)/2);
    ll rnk=((n-k)*(n-k+1)/2);
    ll rkn=r1n-rnk;
    if(rkn<x||r1k>x)
        cout<<"NO\n";
    else
        cout<<"YES\n";
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}