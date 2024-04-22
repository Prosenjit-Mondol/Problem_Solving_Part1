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
    string s;
    cin>>s;
    ll sum=0,c=0;
    for (int i = 0; i <s.size(); i++)
    {
        int x;
        x=s[i]-'0';
        sum+=x;
    }
    if (sum<10)
    {
        if (sum==0)
        {
            cout<<0<<'\n';
        }
        else
        cout<<1<<'\n';
        return;
    }
    
    while (1)
    {
        c++;
        ll st=0;
        while (sum)
        {
            st+=(sum%10);
            sum/=10;
        }
        sum=st;
        if (sum==1)
        {
            c++;
           break;
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
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}