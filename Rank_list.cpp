//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
bool cmp(const pair<int,int> &p1,const pair<int,int> &p2){
    if (p1.first>p2.first)
    {
        return 1;
    }
    else if (p1.first==p2.first)
    {
        return (p1.second<p2.second);
    }
    return 0;
}

void solve(void)
{
    int c=0,n,k;
    cin>>n>>k;
    vector<pair<int,int>>v(n);
    for (int i = 0; i <n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),cmp);
    for (int i = 0; i <n; i++)
    {
        if (v[k-1].first==v[i].first&&v[k-1].second==v[i].second)
        {
            c++;
        }
        
    }
    cout<<c<<'\n';
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