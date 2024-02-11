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
    int f=-1,f2=0,n;
    cin>>n;
    vector<int>v,v1(n,1);
    for(int i=0;i<n;i++)
    {
        int o;
        cin>>o;
        v.push_back(o);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j= i+1; j < n; j++)
        {
            if (v[i]==v[j]&&v[i]!=f)
            {
                if (f2==0)
                {
                    f=v[i];
                    v1[i]=1;
                    v1[j]=2;
                    f2++;
                    break;
                }
                else
                {
                    v1[i]=1;
                    v1[j]=3;
                    f2++;
                    break;
                }
                
            }
            
        }
        if (f2==2)
        {
            break;
        }
        
    }
    if(f2<2)
    {
        cout<<-1<<'\n';
    }
    else
    {
        for(auto element : v1)
        {
        cout<<element<<" ";
        }
    }
    
    cout<<"\n";
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