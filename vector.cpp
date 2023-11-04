#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;

void solve(void)
{
    vector<int>v;
    v.push_back(8);
    v.emplace_back(2);
    cout<<v[0]<<" "<<v[1]<<endl;
    
    vector<int>p(5);
    for(auto element : p)
    {
    cout<<element<<"\t";
    }
    cout<<endl;
      vector<int>q(5,100);
    for(auto element : q)
    {
    cout<<element<<endl;
    }
     vector<int>a(5,20);
     vector<int>b(a);
    for(auto element : b)
    {
    cout<<element<<endl;
    }
    cout<<endl;
    vector<pair<int,int>>vec;
    vec.emplace_back(8,10);//vec.push_back({5,6});//vec.push_back(make_pair(2,4));
    cout<<vec[0].first<<" "<<vec[0].second<<endl;
    
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
  return 0;;
}