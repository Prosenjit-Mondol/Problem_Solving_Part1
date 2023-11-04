#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;

void solve(void)
{
    stack<int>st;
    cout<<"Enter 5 the element";
    for (int i = 0; i <5; i++)
    {
        int x;
        cin>>x;
        st.push(x);
        st.emplace(x*x);
    }
    cout<<st.top();
    st.pop();
    cout<<st.size();
    cout<<st.empty();
    stack<int>st1;
    st1.swap(st);
    cout<<st1.top();
    
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