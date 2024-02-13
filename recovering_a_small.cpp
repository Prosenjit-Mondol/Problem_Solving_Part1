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
    char a,b,c;

    cin>>n;
    if (n>28)
    {
        c='z';
        n=n-26;
        if (n>27)
        {
            b='z';
            n=n-26;
            a='a'+n-1;
        }
        else
        {
            a='a';
            n=n-1;
            b='a'+n-1;
        }
        
        
    }
    else{
        a='a';
        b='a';
        n=n-2;
        c='a'+n-1;
    }
    cout<<a<<b<<c<<'\n';
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