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
    int k=0,f=0,n;
    cin>>n;
    char c;
    cin>>c;
    map<char,vector<string>>mp;

    for (int i = 0; i <n*2; i++)
    {
        string s;
        cin>>s;
        if (s[1]=='C') mp['C'].push_back(s);
        if(s[1]=='D')  mp['D'].push_back(s);
        if (s[1]=='S') mp['S'].push_back(s);
        if(s[1]=='H')  mp['H'].push_back(s);
        
    }
    string val="CSDH";

    sort(mp['C'].begin(),mp['C'].end());
    sort(mp['D'].begin(),mp['D'].end());
    sort(mp['D'].begin(),mp['D'].end());
    sort(mp['H'].begin(),mp['H'].end());

    vector<string>ans;

    for (int i = 0; i <4; i++)
    {
        if (val[i]!=c&&mp[val[i]].size()>0)
        {
            if (mp[val[i]].size()%2!=0&&mp[c].size()==0)
            {
                cout<<"IMPOSSIBLE"<<'\n';
                return;
            }
            vector<string> temp=mp[val[i]];
            int i=0;
            if (temp.size()%2!=0)
            {
                ans.push_back(temp[0]);
                ans.push_back(mp[c].back());
                mp[c].pop_back();
                i++;
            }
            for (; i <temp.size(); i+=2)
            {
                ans.push_back(temp[i]);
                ans.push_back(temp[i+1]);
            }
            
        }
        
    }
    vector<string> temp=mp[c];
    for (int i = 0; i < temp.size(); i+=2)
    {
        cout<<temp[i]<<" "<<temp[i+1]<<'\n';
    }
    for (int i = 0; i <ans.size(); i+=2)
    {
        cout<<ans[i]<<" "<<ans[i+1]<<'\n';
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