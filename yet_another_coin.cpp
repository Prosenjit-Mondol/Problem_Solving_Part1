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

map<int,int>mp;
    mp[0]=0;
    mp[1]=1;
    mp[2]=2;
    mp[3]=1;
    mp[4]=2;
    mp[5]=3;
    mp[6]=1;
    mp[7]=2;
    mp[8]=3;
    mp[9]=2;
    mp[10]=1;
    mp[11]=2;
    mp[12]=2;
    mp[13]=2;
    mp[14]=3;

ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    if (n<15)
    {
        cout<<mp[n]<<'\n';
    }
    else
    {
        ll d=n/15;
        n%=15;
        ll ans=d+mp[n];
        if (n>=5)
        {
            ans=min((d+mp[n]),(d+1+mp[n-5]));
        }
        
        cout<<ans<<'\n';
    }
    
}
return 0;
}