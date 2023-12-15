//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

//------------------------------------------------------------------------------

void solve(void)
{
    ll a,b,c;
    cin>>a>>b>>c;
    if (a==b&&b==c)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        ll m=(a<b)?((a<c)?a:c):((b<c)?b:c);
        if (m==a)
        {
            if (b%a!=0||c%a!=0)
            {
                cout<<"NO"<<'\n';
            }
            else if ((b/a+c/a-2)<=3)
            {
                cout<<"YES"<<'\n';
            }
            else
            cout<<"NO"<<'\n';
        }
        else if (m==b)
        {
            if (a%b!=0||c%b!=0)
            {
                cout<<"NO"<<'\n';
            }
            else if ((a/b+c/b-2)<=3)
            {
                cout<<"YES"<<'\n';
            }
            else
            cout<<"NO"<<'\n';
        }
        else
        {
            if (b%c!=0||a%c!=0)
            {
                cout<<"NO"<<'\n';
            }
            else if ((b/c+a/c-2)<=3)
            {
                cout<<"YES"<<'\n';
            }
            else
            cout<<"NO"<<'\n';
        }
        
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