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
    string r,t,s;
    cin>>s;
    vector<int>div;
    for (int i = 1; i*i<=n; i++)
    {
        if (n%i==0)
        {
            div.push_back(i);
            if (n/i!=i)
            {
                div.push_back(n/i);
            }
        } 
    }
    sort(div.begin(),div.end());
    for(auto el : div)
    {
        int i,j=0;
        ll cnt=0;
        for (int i =t.size(); i <el; i++)
        {
            t+=s[i];
        }
        for ( i =0;i<s.size();i++)
        {
            if (s[i]!=t[j]) cnt++;
            j++;
            j=j%t.size();
        }
        if (cnt<2)
        {
            cout<<el<<'\n';
            return;
        }
        cnt=0;
        j=0;
        for ( i =s.size()-1; i>=0; i--)
        {
            r+=s[i];
            j++;
            if(j==el) break;
        }
        reverse(r.begin(),r.end());
        j=0;
        for ( i =0;i<s.size();i++)
        {
            if (s[i]!=r[j]) cnt++;
            j++;
            j=j%r.size();
        }
        if (cnt<2)
        {
            cout<<el<<'\n';
            return;
        }
        r.clear();
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