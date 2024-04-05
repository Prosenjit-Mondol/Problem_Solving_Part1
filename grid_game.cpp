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
    int n,m,s1,s2;
    cin>>n>>m>>s1>>s2;


    int f=(n+s1-s2+1)/2;
    int s=s1+2-f;
    cout<<f<<" "<<s<<'\n';

    
    // for (int i =1; i <=n; i++)
    // {
    //   if ((abs(i-n)+abs(s1+2-i-1))==s2)
    //   {
    //     cout<<i<<" "<<(s1+2-i)<<'\n';
    //     return;
    //   }
    // }
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