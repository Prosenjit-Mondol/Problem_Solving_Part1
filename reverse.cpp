#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void print(void)
{
    int vt;
    cin>>vt;
    vector<int>v;
    for(int i=0;i<vt;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
    }
    for (int i = vt-1; i>=0; i--)
    {
        cout<<v[i]<<'\n';
    }
    
}
void solve(void)
{
    int n;
    cin>>n;
    while (n--)
    {
        print();
    }
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