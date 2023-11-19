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
    int f1=0,n;
    cin>>n;
    int p;
    cin>>p;
    vector<int>v;
    for(int i=0;i<p;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < p+q; i++)
    {
        if(v[i]!=v[i+1])
        f1++;
    }
    
    if(f1==n)
    cout<<"I become the guy."<<'\n';
    else
    cout<<"Oh, my keyboard!"<<'\n';
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