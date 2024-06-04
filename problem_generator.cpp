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
    int n,m;
    cin>>n>>m;
    map<char,int>mp;
    for (int i = 0; i <n; i++)
    {
        char c;
        cin>>c;
        mp[c]++;
    }
    int sum=0;
    for (char i= 'A'; i <='G'; i++)
    {
        if ((m-mp[i])>0)
        {
            sum+=(m-mp[i]);
        }
        
    }
    cout<<sum<<'\n';
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