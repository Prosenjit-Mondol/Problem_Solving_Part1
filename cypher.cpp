#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
#define vi vector<int>v
#define pi pair<int,int>
using namespace std;
using ll=long long ;

void solve(void)
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        string s;
        cin>>s;
        for (int j=0;j<a;j++)
        {
            if(s[j]=='D')
            {
                v[i]++;
            }
            else
            {
                v[i]--;
            }
            if(v[i]<0)
            v[i]+=10;
            if(v[i]>9)
            v[i]-=10;
        }
    }
    for(auto element : v)
    {
    cout<<element<<" ";
    }
    cout<<"\n";
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}