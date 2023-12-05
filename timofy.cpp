#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    for (int i =0; i <n/2; i++)
    {
        if((i+1)%2!=0)
        {
            int t=v[i];
            v[i]=v[n-1-i];
            v[n-1-i]=t;
        }
    }
    for(auto element : v)
    {
    cout<<element<<" ";
    }
    cout<<'\n';
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}