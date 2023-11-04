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
    ll n,b,d;
    cin>>n>>b>>d;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    ll x;
    cin>>x;
    v.push_back(x);
    }
    ll c=0,a=0;
    for (int i = 0; i < n; i++)
    {
        
        if(v[i]>b)
        {
            continue;
        }

        a+=v[i];

        if(a>d)
        {
            c++;
            a=0;
        }

    }
    cout<<c<<"\n";
    
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