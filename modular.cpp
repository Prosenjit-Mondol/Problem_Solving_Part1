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
    ll c=0,a,b;
    cin>>a>>b;
    if (a==0)
    {
        cout<<0<<'\n';
        return;
    }
    if (b==0)
    {
        cout<<1<<'\n';
        return;
    }
    
    if (a<=b)
    {
        cout<<"infinity"<<'\n';
        return;
    }
    
    
    for (int i = b; i <=a-b; i++)
    {
        if (a%i==b)
        {
            c++;
        }
    }
    if (c==0)
    {
        cout<<"infinity"<<'\n';
    }
    else
    cout<<c<<'\n';
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