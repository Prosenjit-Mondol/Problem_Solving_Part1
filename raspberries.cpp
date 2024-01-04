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
    int va,c=0,m=mod,n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
        if (o%2==0)
        {
            c++;
        }
        if (o%k==0)
        {
            m=0;
        }
        va=o%k;
        m=min(m,k-va);
    }
    if (k==4)
    {
        if (c>=2)
        {
            m=0;
        }
        else if (c==1)
        {
            m=min(m,1);
        }
        else
        m=min(m,2);
    }
    cout<<m<<'\n';
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