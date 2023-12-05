#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    string s;
    cin>>s;
    
    //
    vector<char>r;
    vector<char>::iterator it;
    it=r.begin();
    r.push_back(s[0]);
    r.push_back(s[2]);
    r.push_back(s[4]);
    r.push_back(s[6]);
    r.push_back(s[8]);
    r.erase(it,it+1);
    cout<<r[0]<<r[2];
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