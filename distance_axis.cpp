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
    ll n,k;
    cin>>n>>k;
    if(n<k)
    cout<<(k-n)<<"\n";
    else if(n%2==k%2)
    cout<<0<<"\n";
    else
    {
        cout<<1<<"\n";
    }
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