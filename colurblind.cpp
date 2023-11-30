#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    for (int i = 0; i < n; i++)
    {
      if((s1[i]=='B'&&s2[i]=='G')||(s1[i]=='G'&&s2[i]=='B'))
      {
        s1[i]='B';
        s2[i]='B';
      }
    }
    if(s1==s2)
    cout<<"YES"<<'\n';
    else
    cout<<"NO"<<'\n';
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