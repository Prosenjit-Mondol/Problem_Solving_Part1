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
    int m;
    cin>>m;
    int p[m][m];
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ll x;
            cin>>x;
            if (x==0)
            {
                p[i][j]=INT_MAX;
            }
            else
            p[i][j]=x;
        }
    }
    cout<<"The shortest path matrix is"<<'\n';
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<p[i][j]<<" ";
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
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}