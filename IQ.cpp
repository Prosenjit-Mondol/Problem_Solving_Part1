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
    int s,n,e=0,o=0,le,lo;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    if(x%2==0)
    {
        e++;
        le=x;
    }
    else
    {
        o++;
        lo=x;
    }
    }
    if(o>e)
    s=le;
    else
    s=lo;

    for (int i = 0; i < n; i++)
    {
        if(s==v[i])
        {
            cout<<(i+1)<<'\n';
            break;
        }
    }
    
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