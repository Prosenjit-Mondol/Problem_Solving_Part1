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
    int a,b;
    char c;
    cin>>a>>c>>b;
    if (a==0)
        {
            cout<<12<<c;
            if (b<10)
            {
                cout<<0<<b<<" "<<"AM"<<'\n';
            }
            else
            {
                cout<<b<<" "<<"AM"<<'\n';
            }
        }
    else if (a<=12)
    {

        if (a<10)
        {
            cout<<0<<a<<c;
            if (b<10)
            {
                cout<<0<<b<<" "<<"AM"<<'\n';
            }
            else
            {
                cout<<b<<" "<<"AM"<<'\n';
            }
            
        }
        else
        {
            if (a==12)
            {
                cout<<a<<c;
                if (b<10)
            {
                cout<<0<<b<<" "<<"PM"<<'\n';
            }
            else
            {
                cout<<b<<" "<<"PM"<<'\n';
            }
                return;
            }
            
            cout<<a<<c;
            if (b<10)
            {
                cout<<0<<b<<" "<<"AM"<<'\n';
            }
            else
            {
                cout<<b<<" "<<"AM"<<'\n';
            }
        }
        
    }
    else
    {
        a=a-12;
        if (a<10)
        {
            cout<<0<<a<<c;
            if (b<10)
            {
                cout<<0<<b<<" "<<"PM"<<'\n';
            }
            else
            {
                cout<<b<<" "<<"PM"<<'\n';
            }
            
        }
        else
        {
            cout<<a<<c;
            if (b<10)
            {
                cout<<0<<b<<" "<<"PM"<<'\n';
            }
            else
            {
                cout<<b<<" "<<"PM"<<'\n';
            }
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