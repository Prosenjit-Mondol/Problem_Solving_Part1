#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    int c=0,n,k;
    cin>>n>>k;
    vector<int>v;
    vector<int>v2;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    int value=0;
    v2=v;
    sort(v2.begin(),v2.end());
    for (int i = 0; i <n; i++)
    {
        if (v2[i]!=v[i])
        {
            value=1;
            break;
        }
        
    }
    if(k==1&&value==1)
    cout<<"NO"<<'\n';
    else
    cout<<"YES"<<'\n';
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