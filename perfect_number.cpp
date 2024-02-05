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
    int c=0,s=0,r=n;
    if (n<10)
    {
        cout<<n<<(10-n)<<'\n';
    }
    while (n)
    {
        int a=n%10;
        s+=a;
        n/=10;
    }
    if (s>10)
    {
        cout<<r/10<<(10-s+(r%10))<<0<<'\n';
    }
    else
    cout<<r<<(10-s)<<'\n';
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