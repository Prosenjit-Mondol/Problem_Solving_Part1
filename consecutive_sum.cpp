//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;
ll mod = 10e9 + 7;

//------------------------------------------------------------------------------
ll n,k,x,c=0,a[10000];
void solve(void)
{
    cin>>n>>k;
    
    for (int i = 1; i<=n; i++)
    {
        cin>>x;
        a[i%k]=max(a[i%k],x);
    }
    for (int  i = 0; i <k; i++)
    {
        c+=a[i];
    }
    cout<<c<<'\n';
    fill(a, a + n, 0);
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