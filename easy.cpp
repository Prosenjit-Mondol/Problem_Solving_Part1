#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;

void solve(void)
{
    int c=0,n;
    cin>>n;
    //vector<int>v;
    for (int i = 0; i <n; i++)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            c=1;
        }
    }
    if(c==1)
    cout<<"HARD"<<"\n";
    else{
        cout<<"EASY"<<"\n";
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