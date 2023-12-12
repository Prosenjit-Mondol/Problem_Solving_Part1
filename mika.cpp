#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    ll n,k;
    cin>>n>>k;
    ll c=0;
    for (int i = 1; i <=n; i++)
    {
        for (int j = i+1; j<=n; j++)
        {
            if ((i+j)%k==0)
            {
                c++;
            }
        }
    }
    cout<<c<<'\n';
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