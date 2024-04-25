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
    int c=0,n;
    cin>>n;
    string s[n];
    for (int  i = 0; i <n; i++)
    {
        cin>>s[i];
    }
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j< n; j++)
        {
            if (s[i][j]=='o')
            {
                c++;
                cout<<c<<" ";
                continue;
                
            }
            
        }
        
    }
    if (c==n)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
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