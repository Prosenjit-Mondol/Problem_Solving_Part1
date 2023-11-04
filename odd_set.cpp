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
    int n,c=0;
    cin>>n;
    int v=n;
    n*=2;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    if(x%2==0)
    c++;
    }
    if(c!=v)
    cout<<"NO"<<"\n";
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