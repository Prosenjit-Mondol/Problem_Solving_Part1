//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int n;
  cin>>n;
  vector<bool>pri(n,true);
  pri[0]=false;
  pri[1]=false;
  for (int i = 2; i*i<=n; i++)
  {
    if (pri[i])
    {
        for (int j = i*i; j<n; j+=i)
        {
            pri[j]=false;
        }
    }
  }
  int r=0;
  for (int i = 6; i <=n; i++)
  {
    int f=0;
    for (int j= 2; j*j<=i; j++)
    {
        if (j*j==i)
        {
            if (pri[j])
            {
                f++;
            }
        }
        else
        {
            if (i%j==0)
            {
                if (pri[j])
                {
                    f++;
                }
                if (pri[i/j])
                {
                    f++;
                }
            }
        }
    }
    if (f==2)
    {
        r++;
    }
    
  }
  cout<<r<<'\n';
return 0;
}