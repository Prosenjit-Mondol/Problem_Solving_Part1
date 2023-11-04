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
    if(n%7==0)
    cout<<n<<"\n";
    else
    {
        int ans=1;
        for (int i = 1; i < 10; i++)
        {
          if((n-n%10+i)%7==0)
          ans=n-n%10+i;
        }
        cout<<ans<<'\n';
    }
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