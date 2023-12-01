#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    int n;
    cin>>n;
    
      if(n>=10)
      {
        int d=n-10;
        cout<<d<<" "<<n-d<<'\n';
      }
      else
      cout<<0<<" "<<n<<'\n';
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