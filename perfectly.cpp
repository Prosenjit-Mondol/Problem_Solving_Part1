#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
using ll=unsigned long long ;

void solve(void)
{
    ll n;
    cin>>n;
    ll a[n],b[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    int x=9999999,y=9999999,z=9999999,mx=999999,my=999999,mz=999999;
    for (int i = 0; i <n; i++)
    {
        if(b[i]==11)
        z=a[i];
        if(b[i]==10)
        y=a[i];
        if(b[i]==01)
        x=a[i];
        if(x<mx)
        {
            mx=min(mx,x);
        }
        if(y<my)
        {
            my=min(my,y);
        }
        if(z<mz)
        {
            mz=min(mz,z);
        }
    }
    if ((mx==999999 || my==999999) && mz==999999)
    {
        cout<<-1<<'\n';
        return;
    }
    else if((mx+my)<=mz)
    cout<<(mx+my)<<"\n";
    else
    cout<<mz<<'\n';
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