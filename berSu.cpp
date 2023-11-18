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
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    sort(v.begin(),v.end());
    int m;
    cin>>m;
    vector<int>v2;
    for(int i=0;i<m;i++)
    {
    int x;
    cin>>x;
    v2.push_back(x);
    }
    sort(v2.begin(),v2.end());
    int c=0;
        for (int i = 0; i <n; i++)
        {

            for (int j=0;j<m;j++) 
            {
               if(abs(v[i]-v2[j])<=1){
                v2[j]=10000;
               c++;
              break;
              }
            }
        }
    
    cout<<c<<'\n';
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