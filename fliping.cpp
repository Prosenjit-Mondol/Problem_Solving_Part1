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
    ll sum=0,n,c=0;
    cin>>n;
    map<int,int>mp;
    string s;
    cin>>s;
    while(1)
    {
        c=0;
    for (int i = 0; i < n-1; i++)
    {
        if(mp[i]==1)
        {
            continue;
        }
        else if(s[i]=='A'&&s[i+1]=='B')
        {
            c=1;
            mp[i]=1;
            sum++;
            s[i]='B';
            s[i+1]='A';
        }
    }
    if(c==0){
        break;
    }
    }
    cout<<sum<<'\n';
    
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}