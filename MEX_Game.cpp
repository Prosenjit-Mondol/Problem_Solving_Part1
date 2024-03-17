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
    int f=1,c=0,k=0,n;
    cin>>n;
    map<int,int>mp;
    vector<int>v(n);
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }

    for (int i = 0; i <n; i++)
    {
        if (mp[i]<2)
        {
            c++;
        }
        if(mp[i]==0) f=0;
        if(f&&c<=1) k=i+1;
    }
    
    cout<<k<<'\n';
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