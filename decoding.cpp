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
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<char>v;
    if(n%2==0)
    {
        for (int i = 0;i<n; i++)
    {
        if(i%2==0)
        v.insert(v.begin(),s[i]);
        else
        v.insert(v.end(),s[i]);
    }
    }
    else
    {
        for (int i = 0;i<n; i++)
    {
        if(i%2!=0)
        v.insert(v.begin(),s[i]);
        else
        v.insert(v.end(),s[i]);
    }
    }
    for(auto element : v)
    {
    cout<<element;
    }
    cout<<'\n';
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