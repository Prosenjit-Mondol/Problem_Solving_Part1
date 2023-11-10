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
		cin >> n;
		vector<int> a(2 * n);
		for (auto &it : a) cin >> it;
		vector<int> used(n);
		vector<int> p;
		for (int i = 0; i < 2 * n; ++i) {
			cout<<used[a[i] - 1]<<" ";
			if (!used[a[i] - 1]) {
				used[a[i] - 1] = true;
				p.push_back(a[i]);
			}
		}
		for (auto it : p) cout << it << " ";
		cout << endl;
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