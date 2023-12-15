//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

//------------------------------------------------------------------------------

void solve(void)
{
  int n,m=inf,d,s;
  cin>>n;
  for (int i = 0; i <n; i++)
  {
    cin>>d>>s;
    int x;
    if (s%2==0)
    {
      x=d+(s-2)/2;
    }
    else
    {
      x=d+s/2;
    }
    m=min(m,x);
  }
  cout<<m<<'\n';
}


//------------------------------------------------------------------------------
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