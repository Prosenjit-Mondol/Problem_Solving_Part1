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
    int r,n;
    string s;
    cin>>s;
    n=s.length();
    r=n+5;
    int l=0;
    int cnt[4]={};
    for (int i = 0; i < n; i++)
    {
        int d=s[i]-'0';
        cnt[d]++;
        while (cnt[s[l]-'0']>1)
        cnt[s[l]-'0']--;
        l++;
        if (cnt[1]&&cnt[2]&&cnt[3])
        {
            r=min(r,i-l+1);
        }
        
    }
    
    if (r==n+5)
    {
        r=0;
    }
    
    cout<<r<<'\n';
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