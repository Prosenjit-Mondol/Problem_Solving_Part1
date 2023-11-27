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
    int n,v[5];
    cin>>n;
    for (int k=10,i = 0; i < 5; k*=10,i++)
    {
        if(n>0){
        v[i]=n%k;
        n=n/k;
        }
        else
        break;
    }
    cout<<sizeof(v)<<'\n';
    for (int i = 0; i < sizeof(v); i++)
    {
        cout<<v[i]<<" ";

    }
    cout<<'\n';
    
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