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
    if(n%2!=0)
    {
        cout<<-1<<'\n';
    }

    else
    {
        for (int i = 1; i <=n; i++)
        {
            if(i%2==0)
            cout<<(i-1)<<" ";
            else
            cout<<(i+1)<<" ";
        }
        cout<<"\n";
    }
    
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t;
  t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}