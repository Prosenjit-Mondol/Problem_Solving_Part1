//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 10e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int n;
    cin >> n;

    int l = 1;
    int r = 1e9;
    int s = 0;
    
    vector<int> neq;

    for (int i = 0; i < n; i++){
        int a, x;
        cin >> a >> x;

        if (a == 1)
            l = max(l, x);
        if (a == 2)
            r = min(r, x);
        if (a == 3)
            neq.push_back(x);
    }
    for (int x : neq)
        if (x >= l and x <= r)
            s++;
    
    cout<<max(r - l + 1 - s, 0)<<"\n";
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