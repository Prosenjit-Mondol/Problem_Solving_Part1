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
    int aa=1,bb=1,a=0,b=0,n;
    cin>>n;
    vector<ll>v;
    set<ll>s;

    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
        s.insert(o);
    }

    if ((s.size())==1)
    {
        cout<<0<<'\n';
        return;
    }


    for (int i = 0; i < n; i++)
    {
        if (v[0]!=v[i])
        {
            a=i;
            break;
        }
        aa++;
        
    }

    for (int i =n-1; i >=0; i--)
    {
        if (v[n-1]!=v[i])
        {
            b=i;
            break;
        }
        bb++;
        
    }

    if (aa>=bb)
    {
        
        for (int i =n-1; i >=0; i--)
        {
            if (v[0]!=v[i])
            {
                cout<<(i-a+1)<<'\n';
                return;
            }
            
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (v[n-1]!=v[i])
            {
                cout<<(b-i+1)<<'\n';
                return;
            }
            
        }
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