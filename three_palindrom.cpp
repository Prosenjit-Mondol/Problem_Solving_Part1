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
    for (int i = 0; i < n;)
    {
        if (i<n)
        {
            cout<<'a';
            i++;
        }if (i<n)
        {
            cout<<'a';
            i++;
        }
        if (i<n)
        {
            cout<<'b';
            i++;
        }
        if (i<n)
        {
            cout<<'b';
            i++;
        }
    }
    
    cout<<'\n';
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}