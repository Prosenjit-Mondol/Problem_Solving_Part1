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
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    ll s=0,c=0;
    for (int i = 0; i < n-1; i++)
    {
        if(v[i]==v[i+1])
        s++;
    }
    cout<<s<<" ";
    for (int  i = 1; i < n; i++)
    {
        c+=(n-i);
        //cout<<c<<" "<<i<<" ";
    }
    cout<<(c-s)<<"\n";
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  cin>>t;
  int k=1;
    while(t--)
     {
        cout<<"Case "<<k<<": ";
       solve();
       k++;
     }
return 0;
}