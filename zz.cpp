#include <bits/stdc++.h>
using namespace std;
const int inf = 3e5;
using ll = long long;
ll mod = 1e9 + 7;

#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper)

//------------------------------------------------------------------------------

void solve() {
   int n;
   cin>>n;
   vector<ll>v;
   for(int i=0;i<n;i++)
   {
       ll o;
       cin>>o;
       v.push_back(o);
   }
   cout<<v[0];
   v.pop_back();
   for(auto element : v)
   {
   cout<<element<<" ";
   }
}

//------------------------------------------------------------------------------

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
