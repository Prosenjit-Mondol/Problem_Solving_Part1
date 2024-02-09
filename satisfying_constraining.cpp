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
    int n;
    cin>>n;
    vector<ll>a,b,c;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        if (x==1)
        {
            a.push_back(y);
        }
        else if (x==2)
        {
            c.push_back(y);
        }
        else
        {
            b.push_back(y);
        }
    }
    sort(a.begin(),a.end(),greater());
    sort(c.begin(),c.end());
    ll r=a[0];
    ll f=c[0]-1;
    for (int i = 0; i <b.size(); i++)
    {
        if(count(b.begin(),b.end(),f)){
            f--;
        }

        else
        {
            if (f<r)
            {
                cout<<0<<'\n';
            }
            else
            cout<<f<<'\n';
            return;
        }
        
    }
    cout<<0<<'\n';
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