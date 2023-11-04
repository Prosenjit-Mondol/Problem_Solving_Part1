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
    string a;
    cin>>a;
    if(a=="abc")
    cout<<"YES"<<"\n";
    else if(a=="acb")
    cout<<"YES"<<"\n";
    else if(a=="bac")
    cout<<"YES"<<"\n";
    else if(a=="bca")
    cout<<"NO"<<"\n";
    else if(a=="cab")
    cout<<"NO"<<"\n";
    else if(a=="cba")
    cout<<"YES"<<"\n";
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