//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;
ll mod = 10e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int n,a=0,b=0;
    cin>>n;
    vector<int>v1,v2;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v1.push_back(o);
    }
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v2.push_back(o);
    }
    for (int i = 0; i <n; i++)
    {
        if (v1[i]<v2[i])
        {
            int s=v1[i];
            v1[i]=v2[i];
            v2[i]=s;
        }
    }
    for (int i = 0; i < n; i++)
    {
        a=max(a,v1[i]);
        b=max(b,v2[i]);
    }
    if (a==v1[n-1]&&b==v2[n-1])
    {
        cout<<"YES"<<'\n';
    }
    else
    cout<<"NO"<<'\n';
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