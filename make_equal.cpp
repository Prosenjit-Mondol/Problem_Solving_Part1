//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll= long long ;
ll mod = 10e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int n;
    cin>>n;
    ll f=0,sum=0;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
        sum+=o;
    }
    sum=sum/n;
    for (int i = 0; i < n; i++)
    {
        if (v[i]>sum)
        {
            f+=(v[i]-sum);
        }
        else
        {
            f-=(sum-v[i]);
        }
        if (f<0)
        {
            cout<<"NO"<<'\n';
            return;
        }

    }
    cout<<"YES"<<'\n';
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