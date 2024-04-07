//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int n;
    cin>>n;
    for (int i =0; i <=n; i++)
    {
      for (int j= 1; j<=(n-i)*2; j++)
      {
        cout<<" ";
      }
      if (i==0)
      {
        cout<<0<<'\n';
        continue;
      }
      
      for (int j= 0;j<=i; j++)
      {
        cout<<j<<" ";
      }
      for (int j=i-1;j>0; j--)
      {
        cout<<j<<" ";
      }
      cout<<0<<'\n';
    }
    for (int i =n-1; i>=0; i--)
    {
      for (int j= 1; j<=(n-i)*2; j++)
      {
        cout<<" ";
      }
      if (i==0)
      {
        cout<<0<<'\n';
        continue;
      }
      for (int j= 0;j<=i; j++)
      {
        cout<<j<<" ";
      }
      for (int j=i-1;j>0; j--)
      {
        cout<<j<<" ";
      }
      cout<<0<<'\n';
    }
}


//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}