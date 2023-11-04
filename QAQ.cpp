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
    ll n=0,ans=0;
    cin>>s;
    n=s.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1;j<n; j++)
        {
            for (int k= j+1; k< n; k++)
            {
                if(s[i]=='Q'&&s[j]=='A'&&s[k]=='Q')
                    ans++;
            }
            
        }
        
    }
    cout<<ans<<endl;
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