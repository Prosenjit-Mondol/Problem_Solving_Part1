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
    int a,b,l;
    cin>>a>>b>>l;
    int c=0;
    int x=sqrt(l);
    x++;
    for (int i = 0; i <=x; i++)
    {
        for (int j= i; j<=x; j++)
        {
            for(int k=1;k<=l;k++)
            {
                int sum=k*pow(a,i)*pow(b,j);
                if (sum==l)
                {
                   c++;
                }
            }
        }
        
    }
    for (int i = 0; i <=x; i++)
    {
        for (int j=i; j<=x; j++)
        {
            int sum=pow(b,i)+pow(a,j);
            if (sum==l)
            {
                c++;
            }
            sum=0;
        }
        
    }
    cout<<c<<'\n';
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