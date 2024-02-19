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
    ll m=100,l=10,k=1,n,sum=0;
    cin>>n;
    if (n<10)
    {
        sum=n*(n+1)/2;

    }
    else if(n>=10&&n<=99)
    {
        int k=n/9;
        sum=45*k;
        k=n%9;
        sum+=k*(k+1)/2;
    }
    else if (n>=100&&n<=999)
    {
        int k=n/99;
        sum=4950*k;
        k=n%9;
        sum+=k*(k+1)/2;
    }
    else if (n>=1000&&n<=9999)
    {
        int k=n/999;
        sum=499500*k;
        k=n%99;
        sum+=k*(k+1)/2;
    }
    cout<<sum<<'\n';
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