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
    int z=0,n;
    cin>>n;
    vector<ll>vp,vn;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        if (o>0)
        {
            vp.push_back(o);
        }
        else if(o<0)
        vn.push_back(o);
        else
        z++;
    }

    if (vn.size()==0)
    {
        cout<<vp[0]<<" "<<-1<<'\n';
        if(vp.size()<1)
        cout<<2<<" "<<1<<'\n';
        else
        cout<<2<<" "<<vp[1]<<'\n';
    }
    else if (vp.size()==0)
    {
        cout<<1<<" "<<vn[0]<<'\n';
        if(vn.size()<1)
        cout<<2<<" "<<1<<'\n';
        else
        cout<<2<<" "<<vn[1]<<" "<<vn[2]<<'\n';
    }
    else
    {
        cout<<1;
        for (int i = 0; i <vn.size(); i++)
        {
            cout<<" "<<vn[i];
        }
        cout<<'\n';
        cout<<1;
        for (int i = 0; i <vp.size(); i++)
        {
            cout<<" "<<vp[i];
        }
        cout<<'\n';
    }
    
    cout<<1;
    for (int i = 0; i <z; i++)
    {
        cout<<" "<<0;
    }
    cout<<'\n';
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