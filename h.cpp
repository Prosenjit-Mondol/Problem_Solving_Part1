#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    string s;
    cin>>s;
    int r=s[1]-'0';
    char c=s[0];
    for (int i = 1; i <=8; i++)
    {
        if(i==r)
        continue;
        cout<<s[0]<<i<<'\n';

        
    }
    char v='a';
    for (int i = 1; i <=8; i++)
    {
        if (c!=v)
        {
            cout<<v<<s[1]<<'\n';
        }
        
        v++;
    }
    
}


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