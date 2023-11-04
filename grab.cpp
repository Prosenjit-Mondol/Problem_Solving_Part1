#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;

void solve(void)
{
    int n;
    cin>>n;
    int a[n+10];
    int m=0,nn=0;
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    for (size_t i = 0; i < n; i++)
    {
        if(a[i]%2==0)
        {
            m+=a[i];
        }
        else
        nn+=a[i];
    }
    if(m>nn)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
    
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