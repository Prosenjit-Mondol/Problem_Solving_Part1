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
    int k=0,f=0,n;
    cin>>n;
    n=n*2;
    char c;
    cin>>c;
    string str,t[n/2],s[n/2];
    for (int i = 0; i <n; i++)
    {
        cin>>str;
        if (str[1]==c)
        {
            t[f]=str;
            f++;
        }
        else
        {
            s[k]=str;
            k++;
        }
        
    }
    if (f==0)
    {
        cout<<"IMPOSSIBLE"<<'\n';
    }
    else
    {
        if (f>=n/2)
        {
            for (int i = 0; i <n/2; i++)
            {
                if (k>0&&f>0)
                {
                    cout<<s[k]<<" "<<t[f]<<'\n';
                    k--;
                    f--;
                }
                else
                {
                    cout<<t[f]<<" "<<t[f-1]<<'\n';
                    f-=2;
                }
                
                
            }
            
        }
        else
        {
            /* code */
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