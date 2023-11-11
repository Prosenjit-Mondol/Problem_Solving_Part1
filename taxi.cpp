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
    int u=0,a=0,b=0,c=0,d=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    if(x==4)
    d++;
    else if(x==3)
    c++;
    else if(x==2)
    b++;
    else if(x==1)
    a++;
    }
    if(c>=a)
    {
      d+=c;
      if(b%2==0)
      d+=(b/2);
      else
      d+=((b/2)+1);
      cout<<d<<'\n';
    }

    else
    {
        d+=c;
        a-=c;
        if(b%2==0)
        d+=(b/2);
        else
        {d=d+b/2+1;
        a=a-2;}

        if(a>0)
        {
            if((a%4)==0)
            d+=(a/4);
            else
            d=d+a/4+1;
            cout<<d<<'\n';
            return ;
        }
        cout<<d<<'\n';
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