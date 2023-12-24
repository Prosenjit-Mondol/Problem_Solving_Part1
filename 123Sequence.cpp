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
    int one=0,two=0,three=0,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int o;
        cin>>o;
        if (o==1)
        {
            one++;
        }
        else if (o==2)
        {
            two++;
        }
        else
        three++;
    }
    int m=max(max(one,two),three);
    cout<<(n-m)<<'\n';
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