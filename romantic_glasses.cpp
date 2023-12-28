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
    ll sum1=0,sum2=0,n;
    cin>>n;
    vector<ll>v1,v2;
    for (int i = 1; i <=n; i++)
    {
        ll x;
        cin>>x;
        if (i%2==0)
        {
            v2.push_back(x);
            sum2+=x;
        }
        else
        {
            v1.push_back(x);
            sum1+=x;
        }
    }
    cout<<v1.size()<<" "<<v2.size()<<'\n';
    if (sum1==sum2)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        
        
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