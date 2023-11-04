#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;

void solve(void)
{
    string s;
    cin>>s;
    ll a=1,m=0;
    char c=s[0];
    for (int i = 1;s[i]!='\0'; i++)
    {
        if(c==s[i])
        {
            a++;
        }
        else
        {
            m=max(m,a);
            a=1;
            c=s[i];
        }
    }
    m=max(m,a);
    cout<<m<<"\n";
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}