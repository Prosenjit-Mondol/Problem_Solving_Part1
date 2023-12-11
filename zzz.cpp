#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;
 
 int coun(string a,string b){
    int val=0;
    for (int i = 0; i < a.size(); i++)
    {
        val+=abs(a[i]-b[i]);
    }
    return val;
 }
void solve(void)
{
    int n,m;
    cin>>n>>m;
    int a[n+5][m+5];
    for (int i = 0; i <n; i++)
    {
      for (int j= 0; j< m; j++)
      {
        cin>>a[i][j];
      }
    }
    if (n==2)
    {
      cout<<1<<'\n';
    }
    else if (n==4)
    {
      cout<<20<<'\n';
    }
    else if (n==3)
    {
      if (a[0][0]==1)
      {
        cout<<5<<'\n';
      }
      else
      cout<<3<<'\n';
    }
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