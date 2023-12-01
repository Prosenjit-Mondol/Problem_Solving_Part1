#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    double r;
    cin>>r;
    double s=pow((r*2),2);
    double pi = 2 * acos(0.0);
    double c=pi*r*r;

    cout<<fixed<<setprecision(2)<<(s-c)<<'\n';
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1,k=1;
  cin>>t;
    while(t--)
     {
        cout<<"Case "<<k<<": ";
        solve();
        k++;
     }
return 0;
}