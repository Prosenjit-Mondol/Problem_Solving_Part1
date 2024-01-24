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
    int x,y,n;
    cin>>n;
    for (int i = 0; i < 3; i++)
    {
        cin>>x>>y;
        if (x==n)
        {
            n=y;
        }
        else if (n==y)
        {
            n=x;
        }
        
    }
    cout<<n<<'\n';
}


//------------------------------------------------------------------------------
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << fixed << showpoint << setprecision(0);
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