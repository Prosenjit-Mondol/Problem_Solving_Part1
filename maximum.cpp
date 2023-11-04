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
    ll maxr=0;
    cin>>n;
    // vector<int>v;
    // for(int i=0;i<n;i++)
    // {
    // ll x;
    // cin>>x;
    // v.push_back(x);
    // }
    int v[n+1];
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    for (int i = 0; i <n/2; i++)
    {
        for (int j =n-1; j>n/2+1;j--)
        {
            if(v[i]!=v[j])
            {
                ll r=abs(i-j);
                maxr=max(maxr,r);
                break;
            }
        }
        
    }
    cout<<maxr<<"\n";
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  t=1;
    while(t--)
     {
       solve();
     }
return 0;
}