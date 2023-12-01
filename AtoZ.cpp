#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    int n,x;
    cin>>n>>x;
    vector<char> v;

    for (int i = 0; i<26; i++)
    {
        char k=65+i;
        for (int j= 0; j< n; j++)
        {
            v.push_back(k);
        }
        
    }
    
    cout<<v[x-1]<<'\n';
    
}


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