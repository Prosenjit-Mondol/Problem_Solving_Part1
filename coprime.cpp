#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=long long ;

void solve(void)
{
  vector<int>arr(1001,0);
    int sum=-1,n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int o;
        cin>>o;
        arr[o]=i;
    }
    for (int  i =1; i<=1000; i++)
    {
      for (int j=1;j<=1000;j++)
      {
        int g=__gcd(i,j);
        if (g==1&&arr[i]&&arr[j])
        {
          sum=max(sum,arr[i]+arr[j]);
        }
      }  
    }
    cout<<sum<<"\n";
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}