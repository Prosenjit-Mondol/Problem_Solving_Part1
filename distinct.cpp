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
    set<int>se;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        se.insert(a);
    }
    int l=se.size();
    int od=n-l;
    if(od%2==0)
    cout<<l<<'\n';
    else
    cout<<l-1<<'\n';
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