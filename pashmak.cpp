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
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    int d1=abs(x1-x2);
    int d2=abs(y1-y2);
    
    if(d1==d2 || (x1==x2)||(y1==y2))
    {
         if (x1==x2)
         {
             cout<<x1+abs(y2-y1)<<" "<<y1<<" "<<x1+abs(y2-y1)<<" "<<y2<<'\n';
         }
         else if (x1!=x2 && y1!=y2)
         {
            cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<'\n';
         }
         else if (y1==y2)
         {
            cout<<x1<<" "<<y1+abs(x2-x1)<<" "<<x2<<" "<<y1+abs(x2-x1)<<" "<<'\n';
         }
         
    }
    else
    {
        cout<<-1<<'\n';
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