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
    vector<char>f,l;
    for(int i=0;i<n;i++)
    {
        char o;
        cin>>o;
        f.push_back(o);
    }
    for(int i=0;i<n;i++)
    {
        char o;
        cin>>o;
        l.push_back(o);
    }
    sort(f.begin(),f.end());
    sort(l.begin(),l.end());
    int fc=0,lc=0;
    for (int i = 0; i < n; i++)
    {
        if (f[i]>=l[i])
        {
            fc++;
        }
        if(l[i]>=f[i])
        {
            lc++;
        }
        
    }
    if (fc && lc)
    {
        cout<<"NO"<<'\n';
    }
    else
    {
        cout<<"YES"<<'\n';
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