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
    ll a,b,n;
    cin>>a>>b>>n;
    int c=0;
    ll s=0;
    while (1)
    {
        
        if(a<b)
        {
        a+=b;
        s=a;
        c++;
        }
        else{
        b+=a;
        s=b;
        c++;
        }
        if(s>n)
        break;
        
    }
    cout<<c<<'\n';
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