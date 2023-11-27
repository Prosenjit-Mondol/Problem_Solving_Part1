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
    ll n;
    cin>>n;
    int a,b,c=0,d=-1;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(a<=10 &&b>c)
        {
            c=b;
            d=i;
        }
    }
    cout<<d<<'\n';

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