#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    ll c=0,n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        if(i == 0 || o != v.back())
        {
            v.push_back(o);
        }
    } 
    if (n==1)
    {
      cout<<"YES"<<'\n';
      return;
    }
    int vv=0;

    for (int i = 0; i < v.size(); i++)
    {
       if ((i==0 || v[i-1]>v[i])&&(i==v.size()-1||v[i]<v[i+1]))
       {
        vv++;
       }
    }
      if (vv==1)
      {
        cout<<"YES"<<'\n';
      }
      else
      {
        cout<<"No"<<'\n';
      }
      
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}