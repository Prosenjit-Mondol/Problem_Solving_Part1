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
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2||y1==y2)
    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<'\n';
    else if((x1-x2)==(y1-y2))
    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<'\n';
    else
    cout<<-1<<"\n";
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t;
  t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}