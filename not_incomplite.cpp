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
    int x,y,n,z;
    cin>>x>>y>>z>>n;
    double total=(x*y)*0.6;
    total=ceil(total);
    total-=n;
    int bw=(x-z);
    int bakiclass=bw*y;
    
    int tot=total;
    if(bakiclass<total)
    {
      cout<<"NO"<<"\n";
    }
    else
    {
      cout<<"Yes"<<"\n";
      vector<int>v;
      for (int i = bw-1; i >=0; i--)
      {
        if(tot>=y)
        {
          v.push_back(y);
          tot=tot-y;
        }
        else if(tot>0)
        {
          v.push_back(tot);
          tot=0;
        }
        else
        v.push_back(0);
      }
      for (int i =v.size()-1; i>=0; i--)
      {
        cout<<v[i]<<" ";
      }
      
      cout<<"\n";
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