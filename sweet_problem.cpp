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
    int a,b,c;
    cin>>a>>b>>c;
    int ma=max(max(a,b),c);
    int mi=min(min(a,b),c);
    int sum=a+b+c;
    int d=sum-ma;
    if (ma<=d)
    {
        cout<<sum/2<<"\n";
    }
    else
    {
        cout<<d<<"\n";
    }
    
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