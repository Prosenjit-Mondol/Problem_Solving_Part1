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
    int n,t;
    cin>>n>>t;
    if(t==10)
    {
      if(n==1)
      cout<<-1<<'\n';
      else
      {
        for (int i = 0; i <n-1; i++)
        {
          cout<<1;
        }
        cout<<0<<'\n';
      }
    }
    else{
      for (int i = 0; i < n; i++)
      {
        cout<<t;
      }
      cout<<"\n";
    }

}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t;
  t=1;
    while(t--)
     {
       solve();
     }
return 0;
}