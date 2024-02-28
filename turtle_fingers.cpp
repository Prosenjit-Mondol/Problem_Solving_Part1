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

    set<int>s;

    for (int i = 0; i <25; i++)
    {
        for (int j= 0; j<25; j++)
        {
                int sum=pow(a,i)*pow(b,j);
                if (l%sum==0)
                {
                    s.insert(l/sum);
                }
        }
        
    }
    
    cout<<s.size()<<'\n';
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