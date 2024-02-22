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
    int x,n;
    cin>>n;
    for (int i = 0; i <35; i++)
    {
        for (int j= 0; j< 35; j++)
        {
            x=i*3+j*7;
            if (x==n)
            {
                cout<<"YES"<<'\n';
                return;
            }
            
        }
    }
    for (int i = 0; i <35; i++)
    {
        for (int j= 0; j< 35; j++)
        {
            x=i*7+j*3;
            if (x==n)
            {
                cout<<"YES"<<'\n';
                return;
            }
            
        }
    }
    cout<<"NO"<<'\n';
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