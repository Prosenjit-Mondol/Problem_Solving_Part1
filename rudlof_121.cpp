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
    int r=0,z=0,f=0,n;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
    }
    for (int i = 1; i <n-1; i++)
    {
        if (v[i]==0||v[i+1]==0)
        {
            z=1;
            break;
        }
        if (v[i]==v[i+1])
        {
            r=1;
        }
        if ((v[i]-v[i+1])==2||(v[i]-v[i+1])==-2)
        {
            f=1;
        }
        
    }
    if (z==1)
    {
        cout<<"NO"<<'\n';
    }
    
    else if(f==1&&r==1)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
    }
    
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