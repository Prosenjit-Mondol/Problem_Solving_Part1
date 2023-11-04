#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;

void solve(void)
{
    queue<int> q;
    q.push(4);
    q.push(9);
    q.push(3);
    q.back()+=5;
    cout<<q.back()<<"\n";
    cout<<q.front()<<"\n";
    q.pop();
    cout<<q.front();
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