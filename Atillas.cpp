#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
using ll=long long ;

void solve(void)
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int l=s[n-1]-96;
    cout<<l<<endl;

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