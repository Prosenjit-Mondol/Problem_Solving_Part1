//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int n;
    cin>>n;
    int a[n];
    vector<ll>v;
    for(int i=0;i<n-1;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
    }
    a[0]=v[0]+1;
    //a[1]=a[0]+v[0];
    for (int i =1; i <=n; i++)
    {
      ll x=a[i-1];
      while (x<=v[i])
      {
        x+=a[i-1];
        if (x>v[i])
        {
          break;
        }
        
      }
      
        a[i]=x+v[i-1];
    }
    for(auto element : a)
    {
    cout<<element<<" ";
    }
    cout<<'\n';
}


//------------------------------------------------------------------------------
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