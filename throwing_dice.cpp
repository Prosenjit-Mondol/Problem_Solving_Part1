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
    double al=0,bo=0;
    double m,n;
    cin>>m>>n;
    vector<double>va;
    for(int i=1;i<=m;i++)
    {
        double o;
        cin>>o;
        va.push_back(o);
        al+=(1.0/o);
    }
    vector<double>vb;
    for(int i=1;i<=n;i++)
    {
        double o;
        cin>>o;
        vb.push_back(o);
        bo+=(1.0/o);
    }
    if (al>bo)
    {
        cout<<"ALICE"<<'\n';
    }
    else if (al==bo)
    {
        cout<<"TIED"<<'\n';
    }
    else if(bo>al)
    {
        cout<<"BOB"<<'\n';
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