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
    int p=0,n=0,nn,m;
    cin>>nn>>m;
    vector<int>v;
    for(int i=0;i<nn;i++)
    {
        int o;
        cin>>o;
        v.push_back(o);
        if (o==1)
        {
            p++;
        }
        else
        {
            n++;
        }
        
    }
    for (int i = 0; i <m; i++)
    {
        int a,b;
        cin>>a>>b;
        if (a==b)
        {
            cout<<0<<'\n';
        }
        else
        {
            int d=b-a+1;
            if (d%2)
            {
                cout<<0<<'\n';
            }
            else
            {
                if (d/2<=p&&d/2<=n)
                {
                    cout<<1<<'\n';
                }
                else
                {
                    cout<<0<<'\n';
                }
                
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
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}