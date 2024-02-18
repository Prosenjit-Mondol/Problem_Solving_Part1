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
    ll p=1;
    int l=0,r,n,m;
    cin>>n>>m;
    r=n-1;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int o;
        cin>>o;
        v.push_back(o);
        p*=o;
    }
    string s;
    cin>>s;
    if (m==1)
    {
        for (int i = 0; i <n; i++)
        {
            cout<<0<<" ";
        }
        cout<<'\n';
        return;
    }
    cout<<(p%m)<<" ";
    for (int i = 0; i <n-1; i++)
    {
        if (s[i]=='L')
        {
            int k=v[l];
            p=p/k;
            cout<<(p%m)<<" ";
            l++;
        }
        else if (s[i]=='R')
        {
            int k=v[r];
            p=p/k;
            cout<<(p%m)<<" ";
            r--;
        }
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