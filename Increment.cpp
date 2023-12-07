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
    vector<int> a(n);

    int even1 = 0, even2 = 0, odd1 = 0, odd2 = 0;
    for(int i = 0; i < n; ++i) 
    {
        cin >> a[i];
        if(i % 2 == 0) {
            if(a[i] % 2 == 1) odd1 = 1;
            else even1 = 1; 
        } else
        {
            if(a[i] % 2 == 1) odd2 = 1;
            else even2 = 1;
        }
    }

    if(even1 && odd1) {
        cout << "NO\n";
    } else if(even2 && odd2) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
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