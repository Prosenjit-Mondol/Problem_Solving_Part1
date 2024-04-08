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
    ll sum=0,n,k;
    cin>>n>>k;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
        sum+=o;
    }
    if (sum<=k)
    {
        cout<<n<<'\n';
        return;
    }
    ll c=0,x=(k+1)/2;
    for (int i = 0; i <n; i++)
    {
        if (v[i]<=x)
        {
            x-=v[i];
            c++;
        }
        else
        {
            break;
        }
    }
    x=k/2;
    for (int i =n-1; i>=0; i--)
    {
        if (v[i]<=x)
        {
            x-=v[i];
            c++;
        }
        else
        {
            break;
        }
    }
    
    cout<<c<<'\n';
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