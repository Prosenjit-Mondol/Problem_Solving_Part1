#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.first>b.first)
    return false;
    else
    return true;
}

void solve(void)
{
    pair<int,int>p[5];
    for (int i = 0; i < 5; i++)
    {
        int x,y;
        cin>>x>>y;
        p[i].first=x;
        p[i].second=y;
    }
    sort(p,p+5,cmp);
    for (int i = 0; i < 5; i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<"\n";
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