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
    int r,n,m,c,k=0;
    cin>>n>>m;
    if(n<m)
    {
        cout<<-1<<'\n';
    }
    else
    {
        r=n/2;
        if (r*2!=n)
        {
            r++;
        }
        while (r%m)
        {
            k++;
            if(c==k)
            break;
            r++;
        }
        cout<<r<<'\n';
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