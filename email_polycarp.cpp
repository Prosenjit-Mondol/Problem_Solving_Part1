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
    string a,b;
    cin>>a>>b;
    int la,lb;
    la=a.length();
    lb=b.length();
    if (la>lb)
    {
        cout<<"NO"<<'\n';
    }
    else
    {
        int k=0;
        for (int i = 0; i < lb; i++)
        {
            if (b[i]==a[k])
            {
                k++;
                continue;
            }
            else if (b[i]==a[k-1])
            {
                continue;
            }
            else
            {
                cout<<"NO"<<'\n';
                return;
            }
            
        }
        if (k==la)
        {
            cout<<"YES"<<'\n';
        }
        else
          cout<<"NO"<<'\n';
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