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
    int p=0,n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        if(v[i]==k)
        {
            p=1;
            break;
        }
    }
    if(p==1)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
    
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}