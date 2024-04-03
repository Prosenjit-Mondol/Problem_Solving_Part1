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
    int ma=0,c=0,n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int o;
        cin>>o;
        v.push_back(o);
        if(o==1)
        c++;
        else
        c=0;
        ma=max(ma,c);
    }
    c=0;
    for (int i =0; i < n; i++)
    {
        if (v[i]==1)
        {
            c++;
        }
        else
        break;
    }
    for (int i =n-1; i>=0; i--)
    {
        if (v[i]==1)
        {
            c++;
        }
        else
        break;
    }
    ma=max(ma,c);
    cout<<ma<<'\n';
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