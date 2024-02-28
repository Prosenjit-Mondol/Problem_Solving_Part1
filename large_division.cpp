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
  int t;
  cin>>t;
  for (int i =1; i <=t; i++)
  {
    string a;
    cin>>a;
    int b;
    cin>>b;
    int j=0;
    if (a[0]=='-') j=1;
    if(b<0) b=abs(b);
    ll r=0;
    for ( ; j<a.size(); j++)
    {
      r=r*10+(a[j]-'0');
      r%=b;
    }
    if (r==0)
    {
      cout << "Case " << i << ": divisible" <<'\n';
    }
    else
    cout << "Case " << i << ": not divisible" <<'\n';
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