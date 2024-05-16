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
    ll sum=0,n,x;
    cin>>n>>x;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
        sum+=o;
    }
    if (sum<x)
    {
        cout<<-1<<'\n';
        return;
    }
    int f=0,l=v.size()-1,c=0,m=sum-x;

    for (int i = 0; i <m; i++)
    {
        int ff=f;
        while (v[ff]!=1)
        {
            ff++;
        }
        int la=l;
        while (v[la]!=1)
        {
            la++;
        }
        ff=ff-f;
        la=l-la;
        if (ff<=la)
        {
            f=ff;
            c+=ff;
        }
        else
        {
            l=la;
            c+=la;
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