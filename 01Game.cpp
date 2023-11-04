#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
#define vi vector<int>v
#define pi pair<int,int>
using namespace std;
using ll=long long ;

void solve(void)
{
    string s;
    cin>>s;
    int z=0,o=0;
    for (auto i:s)
    {
        if(i=='0')
        z++;
        else
        o++;
    }
    int ans=min(z,o);
    if(ans%2==1)
    cout<<"DA"<<"\n";
    else
    cout<<"NET"<<"\n";
    
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