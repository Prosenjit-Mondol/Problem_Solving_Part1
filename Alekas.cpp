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
    int k=2;
    ll v=n;

    for (int i = 0; i < n; i++)
    {
        cout<<(v+k)<<" ";
        v+=k;
        k++;
        
    }
    cout<<"\n";
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