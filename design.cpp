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
    ll x;
    int k,c=0;
    cin>>x>>k;
    ll s=x;
    while (1)
    {
        string h=to_string(x);
        c=0;
        for (int i = 0; h[i]!='\0'; i++)
        {
            c+=(int)(h[i]-'0');
        }
        if(c%k==0)
        {
            cout<<x<<'\n';
            return;
        }
        x++;
    }
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