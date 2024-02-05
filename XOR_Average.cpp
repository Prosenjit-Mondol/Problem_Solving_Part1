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
    if (n%2)
    {
        for (int i = 0; i <n; i++)
        {
            cout<<1<<" ";
        }
        cout<<'\n';
    }
    else
    {
        if (n==2)
        {
            cout<<1<<" "<<3<<'\n';
            return;
        }
        cout<<1<<" "<<3<<" ";
        for (int i = 2; i < n; i++)
        {
            cout<<2<<" ";
        }
        cout<<'\n';
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