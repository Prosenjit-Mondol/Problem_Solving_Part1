#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;

void solve(void)
{
    int n,c=0;
    cin>>n;
    string s,ans;
    cin>>s;
    for (int i = 0; i <n-1; i++)
    {
        int r=0;
        for (int j = 0; j < n-1; j++)
        {
            if(s[j]==s[i] && s[j+1]==s[i+1])
            ++r;
        }
        if(r>c)
        {
            c=r;
            ans=string(1,s[i]) + string(1,s[i+1]);
        }
    }
    cout<<ans<<"\n";
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