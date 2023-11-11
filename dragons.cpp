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
    ll s,n,c=0; 
    cin>>s>>n;
    pair<int, int>a[1000];

    for(int i=0;i<n;i++)
        {
            cin>>a[i].first>>a[i].second;

        }
        sort(a,a+n);
         for(int i=0;i<n;i++)
         {
             if(s<=a[i].first)
             {
                 c=1;
                 break;
             }
             else
             {
                 s=s+a[i].second;
             }
         }
    if(c==0)
    cout<<"YES"<<'\n';
    else
    cout<<"NO"<<'\n';
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