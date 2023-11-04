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
    int bakiweek=(x-z);
    bakiweek*=y;
    
    int tot=total;
    if(bakiweek<=total)
    {
        cout<<"NO"<<"\n";
    }
    else
    {
      cout<<"Yes"<<"\n";
      int l=x-z;
      vector<int>v;
      for(int i=0;i<l;i++)
      {
      v.push_back(0);
      }
      for (int i = l-1; i >=0; i--)
      {
        if(tot>=y)
        {
          v[i]=y;
          tot=tot-y;
        }
        else
        {
          v[i]=v[i]+tot;
          break;
        }
      }
      
      for(auto element : v)
      {
      cout<<element<<" ";
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