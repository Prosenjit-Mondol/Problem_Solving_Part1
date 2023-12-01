#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;
 
 int coun(string a,string b){
    int val=0;
    for (int i = 0; i < a.size(); i++)
    {
        val+=abs(a[i]-b[i]);
    }
    return val;
 }
void solve(void)
{
    int n,m;
    cin>>n>>m;
    vector<string>s(n);
    for (int i = 0; i <n; i++)
    {
        cin>>s[i];
    }
    int ans=__INT_MAX__;
    for (int i = 0; i <n; i++)
    {
        for (int j= i+1; j< n; j++)
        {
            ans=min(ans,coun(s[i],s[j]));
        }
        
    }
    cout<<ans<<'\n';
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}