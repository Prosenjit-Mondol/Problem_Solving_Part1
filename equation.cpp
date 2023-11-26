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
    int sum=0,a,b,n,m;
    cin>>n>>m;
    for (int i = 0; i <=100; i++)
    {
        for (int j = 0; j<=100;j++)
        {
            ll s=i*i+j;
            ll p=i+j*j;
            if (s==n && p==m)
            {
                sum++;
            }
            if(s>n || p>m)
            break;
            
        }
    }
    cout<<sum<<'\n';
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