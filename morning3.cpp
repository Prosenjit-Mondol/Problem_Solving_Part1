
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
    int r=0,k;
    string s;
    cin>>s;
    int a,b,c,d;
    a=s[0]-'0';
    if (a==0)
    {
        a=10;
    }
    
    b=s[1]-'0';
    if (b==0)
    {
        b=10;
    }
    
    c=s[2]-'0';
    if (c==0)
    {
        c=10;
    }
    
    d=s[3]-'0';
    if (d==0)
    {
        d=10;
    }
    
    r=abs(a-1)+abs(b-a)+abs(c-b)+abs(d-c);
    cout<<r+4<<'\n';
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