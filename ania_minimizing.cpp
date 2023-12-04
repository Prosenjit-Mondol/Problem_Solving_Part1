#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   if (n==1)
   {
    if (k==0)
    {
      cout<<s<<'\n';
    }
    else
    cout<<'0'<<'\n';
    return;
   }
    int v=0;
   if (s[0]!='1'&&v<k)
     {
       s[0]='1';
       v++;
     }
   for (int i = 1; i < n; i++)
   {
    
    
    if (s[i]!='0'&&v<k)
    {
      s[i]='0';
      v++;
    }
   }
   
   cout<<s<<'\n';
}


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