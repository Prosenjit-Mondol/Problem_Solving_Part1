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
    string s1,s2;
    cin>>s1>>s2;
    int z=0,on=0;
    for (int i = 0; i <n; i++)
    {
        if (s1[i]!=s2[i])
        {
            if (s1[i]=='1')
            {
                on++;
            }
            else
            z++;
        }
        
    }
    cout<<max(z,on)<<'\n';
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