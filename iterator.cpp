#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;

void solve(void)
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    vector<int>::iterator it=v.begin();
    it++;
    cout<<(*it)++<<" "<<(*it)<<" "<<(*++it)<<endl;
    it=v.end();
    cout<<(*--it)<<" "<<(*it)<<endl<<v.at(0)<<" "<<v[0]<<" "<<v.back()<<endl;
   // it=v.rend(); use reverse point
   //iterator for loop
   for(auto it=v.begin();it!=v.end();it++)
   cout<<*(it)<<" ";
   cout<<endl;
   v.erase(v.begin()+2,v.begin()+4);
   for(auto element : v)
   {
   cout<<element<<" ";
   }
   cout<<endl;
   v.insert(v.begin()+1,2,10);
   for(auto element : v)
   {
   cout<<element<<" ";
   }
   cout<<endl;
   vector<int>copy(2,100);
   v.insert(v.begin(),copy.begin(),copy.end());
   for(auto element : v)
   {
   cout<<element<<" ";
   }
   cout<<endl;
   cout<<v.empty()<<" ";
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