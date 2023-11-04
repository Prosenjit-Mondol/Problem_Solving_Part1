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
    int n;
    ll sum=0;
    vector<int>v;
    for(int i=0;i<=n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    sum+=x;
    }
if(sum%2==0)
cout<<"No"<<"\n";
else
cout<<"YES"<<"\n";
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