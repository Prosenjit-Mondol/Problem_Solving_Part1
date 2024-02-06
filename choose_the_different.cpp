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
    ll vk=0,v2k=0,n,m,k;
    cin>>n>>m>>k;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
        if (o<=k)
        {
            vk++;
        }
        
    }
    sort(v.begin(),v.end());

    vector<ll>v2;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v2.push_back(o);
        if (o<=k)
        {
            v2k++;
        }
    }
    sort(v2.begin(),v2.end());

    if (vk<k/2&&v2k>=k/2)
    {
        cout<<"NO"<<'\n';
        return;
    }

    for (int i =1; i <=k; i++)
    {
        
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