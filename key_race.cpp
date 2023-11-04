#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;

void solve(void)
{
    int s,v1,v2,t1,t2,f1,f2;
    cin>>s>>v1>>v2>>t1>>t2;
    f1=(s*v1)+(t1*2);
    f2=(s*v2)+(t2*2);
    if(f1<f2)
    cout<<"First"<<"\n";
    else if(f1>f2)
    cout<<"Second"<<"\n";
    else
    cout<<"Friendship"<<"\n";
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