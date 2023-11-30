#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    int n;
    cin>>n;
    vector<string>v;
    string s;
    map<string,int>mp;
    for(int i=0;i<3;i++)
    {
      for (int j= 0; i <n; j++)
      {
        cin>>s;
        mp[s]++;
        v.push_back(s);
      }
      
    }
    int a=0,b=0,c=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <v[i].size(); j++)
        {
            if(i==0)
            {
                if(mp[v[i][j]]==1) a+=3;
                if(mp[v[i][j]]==2) a++;
            }
            else if(i==1)
            {
                if(mp[v[i][j]]==1) b+=3;
                if(mp[v[i][j]]==2) b++;
            }
            else
            {
                if(mp[v[i][j]]==1) c+=3;
                if(mp[v[i][j]]==2) c++;
            }
        }
        
    }
    cout<<a<<" "<<b<<" "<<c<<'\n';
}


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