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
    ll n,x,r;
    cin>>n>>x;
    if(n<=2)
    {
        cout<<"1"<<"\n";
    }
    else
    {
        r=(n-3)/x+2;
        cout<<r<<"\n";
    }
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