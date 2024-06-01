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
    ll n;
    cin>>n;
    vector<ll>a;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        a.push_back(o);
    }
    vector<ll>b;
    for(int i=0;i<=n;i++)
    {
        ll o;
        cin>>o;
        b.push_back(o);
    }
    ll ex=1e12,sum=0;
    for (int i = 0; i <n; i++)
    {
        sum+=abs(a[i]-b[i]);
        ex=min(ex,abs(a[i]-b[n]));
        ex=min(ex,abs(b[i]-b[n]));
        if (min(a[i],b[i])<=b[n]&&b[n]>=max(a[i],b[i]))
        {
            ex=0;
        }
    }
    cout<<ex<<" "<<(sum+1+ex)<<'\n';
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