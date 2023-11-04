#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;

void solve(void)
{
    ll n;
    cin>>n;
    while(n!=1)
    {
        cout<<n<<" ";
        if(n%2==0)
        {
            n/=2;
        }
        else{
            n=(n*3)+1;
        }
    }
    cout<<"1"<<"\n";
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}