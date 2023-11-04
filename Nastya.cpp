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
    ll n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    ll l=n*(a-b);
    ll p=n*(a+b);
    if(p<(c-d) || (c+d)<l)
     cout << "No\n";
	else
	 cout << "Yes\n";
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