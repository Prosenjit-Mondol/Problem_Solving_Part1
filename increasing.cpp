#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
using ll=long long ;

void solve(void)
{
    ll n;
    cin>>n;
    vector<ll>v;
    int c=0,x;
    for (int i = 0; i <n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for (int i = 1; i <n; i++)
    {
        if(v[i]>v[i-1])
        {
            c++;
        }
        else
        break;
    }
    cout<<(c+1)<<endl;
        
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