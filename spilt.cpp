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
    int f1,f2,n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> pre(n,0),suf(n,0);
    set<char>se;
    for (int i = 0; i <n; i++)
    {
        se.insert(s[i]);
        pre[i]=se.size();
    }
    se.clear();
    for (int i = n-1; i>=0; i--)
    {
        se.insert(s[i]);
        suf[i]=se.size();
    }
    int ans=0,ma=0;
    for (int i = 0;i<n-1; i++)
    {
        ans=pre[i]+suf[i+1];
        ma=max(ma,ans);
    }
    cout<<ma<<'\n';
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