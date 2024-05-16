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
    ll n;
    cin>>n;
    map<int,int>mp;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        int x=o%10;
        mp[x]++;
        if (mp[x]<=3)
        {
            v.push_back(x);
        }
        
    }
    ll sum=0;
    for (int i = 0; i <v.size()-2; i++)
    {
        for (int j =i+1; j <v.size()-1; j++)
        {
            for (int k =j+1; k <v.size(); k++)
            {
                sum=v[i]+v[j]+v[k];
                if (sum%10==3)
                {
                    cout<<"YES"<<'\n';
                    return;
                }
                
            }
            
        }
        
    }
    cout<<"NO"<<'\n';
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