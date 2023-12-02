#include<bits/stdc++.h>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    ll a,b,c,d,e,f,x;
    cin>>a>>b>>c>>d>>e>>f>>x;
    ll aoki=0,taka=0;
    ll c_time=0;

    while (c_time<=x)
    {
      taka+=(a*b);
      c_time+=a;

      if(c_time>=x)
      {
        break;
      }

      c_time+=c;
    }

    c_time=0;

    while (c_time<=x)
    {
      aoki+=(d*e);
      c_time+=d;

      if (c_time>=x)
      {
        break;
      }

      c_time+=f;
    }

    if(taka>aoki)
    cout<<"Takahashi"<<'\n';

    else if(taka<aoki)
    cout<<"Aoki"<<'\n';

    else
    cout<<"Draw"<<'\n';
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