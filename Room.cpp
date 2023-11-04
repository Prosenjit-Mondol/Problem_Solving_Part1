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
    string s,t="hello";
    cin>>s;
    int r=0;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]==t[r])
        r++;
    }
    if(r==t.length())
    cout<<"YES\n";
    else
    cout<<"NO\n";
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