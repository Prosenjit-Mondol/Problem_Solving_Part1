#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;

void solve(void)
{
     set<int>st;
     st.insert(2);
     st.insert(8);
     st.insert(2);
     st.insert(0);
     st.insert(0);
     st.insert(3);
     st.insert(22);
     //auto r=st.find(3);
cout<<st.count(2);
cout<<st.top();
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