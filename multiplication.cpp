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
    ll n,x;
    cin>>n>>x;
    int c=0;
    for (int  i =1; i <=n; i++)
    {
        if(x%i==0 && x/i<=n)  
        c++;
    }
    cout<<c<<'\n';
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t;
  t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}