//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

//------------------------------------------------------------------------------

void solve(void)
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int m=max((3*a/10),(a-(a/250)*c));
    int v=max((3*b/10),(b-(b/250)*d));
    if (m>v)
    {
        cout<<"Misha"<<'\n';
    }
    else if (v>m)
    {
        cout<<"Vasya"<<'\n';
    }
    else
    {
        cout<<"Tie"<<'\n';
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