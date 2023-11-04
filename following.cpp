#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
using ll=long long ;

void solve(void)
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0,y=0,t=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='R')
        x++;
        else if(s[i]=='L')
        x--;
        else if(s[i]=='U')
        y++;
        else if(s[i]=='D')
        y--;
        if(x==1 && y==1)
        {
            t=1;
            break;
        }
    }
    if(t==1)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}