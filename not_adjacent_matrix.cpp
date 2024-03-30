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
    if (n==1)
    {
       cout<<1<<'\n';
    }
    else if (n==2)
    {
        cout<<-1<<'\n';
    }
    else
    {
        int k=1,st,nn=n*n;
        if (nn%2)
        {
            st=nn/2+1;
        }
        else
        st=nn/2;
        for (int i = 1; i <=n; i++)
        {
            for (int j = 1;j<=n; j++)
            {
                if ((i+j)%2==0)
                {
                    cout<<k<<" ";
                    k++;
                }
                else{
                    cout<<st<<" ";
                    st++;
                }
            }
            cout<<"\n";
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