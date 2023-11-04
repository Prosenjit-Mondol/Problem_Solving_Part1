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
    ll a,b,x,y;
    cin>>a>>b;
    x=a/2;
    y=x+b;
    while (1)
    {
        if((x+y)==a && (y-x)==b)
        break;
        else if((x+y)>a)
        {
            int r=a-(x+y);
            x-=r;
        }
        else if((x+y)<a)
        {
            int r=(x+y)-a;
            x-=r;
        }
        y=x+b;
    }
    cout<<y<<" "<<x<<"\n";
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