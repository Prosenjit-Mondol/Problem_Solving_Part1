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
    ll z=0,n,m=0,c=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    if(x<0)
    m++;
    else if(x==0)
    z++;
    }
    sort(v.begin(),v.end());
    if(m%2==0){
    for(int i=0;i<n;i++)
    {
    
     if(v[i]>0)
     c+=(v[i]-1);
     else if(v[i]==0)
     c++;
     else
     c+=abs(v[i]+1);
    }
    }
    else
    {
        c+=abs(v[0]-1);
       for(int i=1;i<n;i++)
    {
    
     if(v[i]<0)
     c+=abs(v[i]+1);
     else
     c+=abs(v[i]-1);
    } 
     if(z>0)
     c-=2;

    }
    
    cout<<c<<'\n';
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