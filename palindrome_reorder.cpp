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
    map<char,int>mp;
    string r,s;
    cin>>s;
    for (int i = 0; i <s.size(); i++)
    {
        mp[s[i]]++;
    }
    int c=0;
    char p;
    for (char i ='A'; i <='Z'; i++)
    {
        if (c==1&&mp[i]%2!=0)
        {
            cout<<"NO SOLUTION"<<'\n';
            return;
        }
        if (c==0&&mp[i]%2!=0)
        {
            c=1;
            p=i;
        }
        
        if (mp[p]%2==0)
        {
            for (int ii=1; ii<=mp[i]/2; ii++)
            {
               r+=i;
            }
        }
    }
    for (int i = 0; i <mp[p]; i++)
    {
        r+=p;
    }
    for (char i ='Z'; i>='A'; i--)
    {
        if (mp[p]%2==0)
        {
            for (int ii=1; ii<=mp[i]/2; ii++)
            {
               r+=i;
            }
        }
    }
    cout<<r<<'\n';
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