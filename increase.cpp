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
    ll n,c=1,m=0;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    if(n==1)
    {
        cout<<"1"<<"\n";
    }
    else
    {
        for (int i = 0; i < n-1; i++)
    {
        if(v[i]<v[i+1])
        {
            c++;
        }
        else
        {
            
            c=1;
        }
        m=max(m,c);
    }
    cout<<m<<"\n";
    }
    
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