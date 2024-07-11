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
    vector<ll>v,s;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
        s.push_back(o);
    }
    sort(v.begin(),v.end());
    int f,l,c=0;
    for (int i = 0; i < n; i++)
    {
        if (v[i]!=s[i])
        {
            c++;
            if (f)
            {
                l=i+1;
            }
            else
            {
                f=i+1;
            }
            
        }
        
    }
    if (c==0)
    {
        cout<<"yes"<<'\n'<<1<<" "<<1<<'\n';
    }
    else if (c==2)
    {
        cout<<"yes"<<'\n'<<f<<" "<<l<<'\n';
    }
    else
    {
        cout<<"no"<<'\n';
    }
    
}


//------------------------------------------------------------------------------
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