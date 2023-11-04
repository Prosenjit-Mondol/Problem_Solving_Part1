#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;

void solve(void)
{
    int c,k,s=0;
    cin>>k;
    int a[100];
    for (int i = 0; i <12; i++)
    {
        cin>>a[i];
    }
    sort(a,a+12,greater<int>());
    if(k==0)
    {
        cout<<"0";
    }
    else{
        for (int i = 0; i < 12; i++)
    {
        s+=a[i];
        if(s>=k)
        {
            c=i;
            break;
        }
    }
    if(s<k)
    {
        cout<<"-1"<<"\n";
    }
    else
    cout<<(c+1)<<"\n";
    }
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