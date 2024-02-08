//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;
ll mod = 10e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int c,f=0,r=0,n,m;
    cin>>n>>m; 
    string s1,s2;
    cin>>s1>>s2;
    if(count(s1.begin(),s1.end(),'*')==0)
    {
      if (s1==s2)
      cout<<"YES"<<'\n';
      else
      cout<<"NO"<<'\n';
      return;
    }
    if (n-1>m)
    {
      cout<<"NO"<<'\n';
      return;
    }
    while (s1[r]!='*')
    {
      if (s1[r]!=s2[r])
      {
        cout<<"NO"<<'\n';
        return;
      }
      r++;
    }
    c=n-1;
    f=m-1;
    while (s1[c]!='*')
    {
      if (s1[c]!=s2[f])
      {
        cout<<"NO"<<'\n';
        return;
      }
      c--;
      f--;
    }
    cout<<"YES"<<'\n';
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