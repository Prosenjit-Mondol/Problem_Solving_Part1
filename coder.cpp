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
    if(n%2==0)
    cout<<((n/2)*n)<<'\n';
    else
    {
        ll nn=n;
        nn++;
        ll s=(nn/2)*nn-n;
        cout<<s<<'\n';
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            if((i+j)%2==0)
            cout<<'C';
            else
            cout<<'.';
        }
        cout<<'\n';
        
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