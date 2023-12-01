#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    vector<int>v;
    for(int i=0;i<10;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    vector<int>v2;
    v2=v;
    sort(v2.begin(),v2.end());
    int in,c=v[0];
    for (int i = 0; i <10; i++)
    {
        if(c==v2[i])
        {
            in=i;
        }
    }
    if(in==1)
    cout<<c<<'\n';
    else
    cout<<v2[in-2]<<'\n';
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}