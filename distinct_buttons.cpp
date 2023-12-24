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
    int u=0,r=0,l=0,d=0,n,x,y;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y;
        if (x>0)
        {
            r=1;
        }
        if(y<0)
        {
            d=1;
        }
        if(x<0){
            l=1;
        }
        if(y>0)
        {
            u=1;
        }
    }
    if ((u==1 && d==1 )&&( l==1 && r==1))
    {
        cout<<"NO"<<'\n';
    }
    else
    {
        cout<<"YES"<<'\n';
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