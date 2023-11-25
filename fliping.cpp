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
    string x;
    cin>>x;
    int p=-1,b=0,cnt=0,e=-1;
    for(int i=0;i<n;i++)
    {
       if(x[i]=='A')
       {
         p=i;
         break;
       }
    }
   for(int i=n-1;i>=0;i--)
   {
      if(x[i]=='B')
      {
          e=i;
          break;
      }
   }
  
  if(p ==-1 || e==-1 || p>e)
  {
    cout<<0<<'\n';
    return;
  }
  cout<<e-p<<'\n';
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