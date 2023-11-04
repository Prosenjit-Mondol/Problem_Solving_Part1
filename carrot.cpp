//MH_Nazmul

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define vec vector<int>
#define pair <int,int>
#define fi first
#define sc second
#define vecp vector<pair<int,int>>



void solve(void)
{
  int n,t,k,d,time;
  cin>>n>>t>>k>>d;
  time=n/k+(n%k>0);
  if(time*t>d)
     cout<<"YES";
  else
     cout<<"NO";   

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