#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll= long long ;

void solve(void)
{
    ll n,k;
    cin>>n>>k;
    ll od=n-(k-1);
    ll ev=n-2*(k-1);
    if (od>0 && od%2!=0)
    {
        cout<<"YES"<<'\n';
        for (int i = 0; i < k-1; i++)
        {
            cout<<1<<" ";
        }
        cout<<od<<'\n';
    }
    else if (ev>0 && ev%2==0)
    {
        cout<<"YES"<<'\n';
        for (int i = 0; i < k-1; i++)
        {
            cout<<2<<" ";
        }
        cout<<ev<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
    }
    
    
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