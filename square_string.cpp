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
    int l=s.size();
    int a=0,r=l/2;
    if(l%2!=0)
    {
        cout<<"NO"<<"\n";
    }
    else{
        for (int i = 0; i < l/2; i++)
        {
            if(s[i]!=s[i+r])
            {
                a=1;
            }
            //cout<<s[i]<<" "<<s[i+r]<<"\n";
        }
        if(a==0)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
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