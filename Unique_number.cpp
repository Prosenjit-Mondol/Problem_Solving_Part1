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
    int x;
    cin>>x;
    vector<int>ans;
    if(x<10)
    {
        cout<<x<<"\n";
    }
    else
    {
      int k=0,v=9;
        while(k<x && v>0)
        {
          ans.push_back(min((x-k),v));
          k+=v;
          v--;
        }
        if(k<x)
        {
          cout<<"-1"<<"\n";
        }
        else{
          reverse(ans.begin(),ans.end());
          for(auto element : ans)
          {
          cout<<element;
          }
          cout<<"\n";
        }
    }
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}