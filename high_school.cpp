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
    ll b,a,x,y;
    cin>>x>>y;
    if (x==y)
    {
        cout<<"="<<'\n';
    }
    else if (x==1)
    {
        cout<<"<"<<'\n';
    }
    else if(y==1){
    cout<<">"<<'\n';
    }
    else if (x+y==6)
    {
        cout<<"="<<'\n';
    }
    else if (x==3)
    {
        cout<<">"<<'\n';
    }
    else if (y==3)
    {
        cout<<"<"<<'\n';
    }
    else if (x<y)
    {
        cout<<">"<<'\n';
    }
    else
    cout<<"<"<<'\n';
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