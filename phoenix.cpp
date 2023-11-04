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
    
    
    ll s1=pow(2,n),s2=0;
    int l=n/2;
    for (int i = 1; i <l; i++)
    {
        
        s1+=pow(2,i);
    }
    for (int i = l; i < n; i++)
    {
        s2+=pow(2,i);
    }
    
    ll r=(s1-s2);
    cout<<r<<"\n";
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