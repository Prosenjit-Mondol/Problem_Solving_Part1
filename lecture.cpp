#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
#define vi vector<int>v
#define pi pair<int,int>
using namespace std;
using ll=long long ;

void solve(void)
{
    int n,m;
    cin>>n>>m;
    string s[m][2];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>s[i][j];
        }
        
    }
    string f[n];
    for (int i = 0; i < n; i++)
    {
        cin>>f[i];
    }
    string r[n];
    
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < m; i++)
        {
            if(f[k]==s[i][0])
            {
                int s1=s[i][0].length();
                int s2=s[i][1].length();
                if(s1<=s2)
                r[k]=s[i][0];
                else
                r[k]=s[i][1];
            }
        
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<r[i]<<" ";
    }
    cout<<'\n';
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t;
  t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}