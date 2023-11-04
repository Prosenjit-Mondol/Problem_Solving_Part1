#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;

void solve(void)
{
    int n,f=0;
    cin>>n;
    string s;
    cin>>s;
    for (int i = 0; i < n-1; i++)
    {
        for (int j= i+1; j<n; j+=2)
        {
            if(s[i]==s[j])
            {
                f=1;
            }
        }
        
    }
    if(f==1)
    cout<<"NO"<<"\n";
    else
    cout<<"YES"<<"\n";
    
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