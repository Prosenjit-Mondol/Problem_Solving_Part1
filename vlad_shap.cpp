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
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        string o;
        cin>>o;
        v.push_back(o);
    }
    int f=0,fs=0,ls=0,fsi=0,fsj=0,lsi=0,lsj=0,lfi=0,lfj=0,lli=0,llj=0;
    for (int i = 0; i < n; i++)
    {
        for (int j= 0; j< n; j++)
        {
            if (v[i][j]=='1')
            {
                fs=i;
                break;
            }
            
        }
        
    }
    for (int i = n-1; i >=0; i--)
    {
        for (int j= 0; j< n; j++)
        {
            if (v[i][j]=='1')
            {
                ls=i;
                break;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (v[fs][i]=='1')
        {
            fsi=i+1;
            break;
        }
        
    }
    for (int i = n-1; i>=0; i--)
    {
        if (v[fs][i]=='1')
        {
            fsj=i+1;
            break;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        if (v[ls][i]=='1')
        {
            lsi=i+1;
            break;
        }
        
    }
    for (int i = n-1; i>=0; i--)
    {
        if (v[ls][i]=='1')
        {
            lsj=i+1;
            break;
        }
        
    }




    //cout<<fsi<<" "<<fsj<<" "<<lsi<<" "<<lsj;
    if (fsi==lsi&&fsj==lsj)
    {
        cout<<"SQUARE"<<'\n';
    }
    else
    {
        cout<<"TRIANGLE"<<'\n';
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