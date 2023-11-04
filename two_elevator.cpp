#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
using ll=long long ;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  cin>>t;
  int n=t;
    while(t--)
     {
       vector<ll>v;
       for (int i = 0; i <n; i++)
       {
        ll x;
        cin>>x;
        v.push_back(x);
       }
       int a=v[0];
       int b=v[1];
       sort(v.begin(),v.end());
       if(v[0]==a && v[1]==b){
       cout<<"1"<<endl;
       break;
       }
       sort(v.begin(),v.end(),greater<ll>());
       if(v[0]==a && v[1]==b)
       cout<<"2"<<endl;
       else
       cout<<"3"<<endl;
     }
return 0;
}