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
    int a,n;
    cin>>n;
    vector<int> v1, v2, v3;
    for (int i = 1; i <= n; ++i) {
		cin >> a;
		if (a == 1) {
			v1.push_back(i);
		} else if (a == 2) {
			v2.push_back(i);
		} else {
			v3.push_back(i);
		}
	}
	int mn = min(min(v1.size(), v2.size()), v3.size());
	cout << mn << endl;
	for (int i = 0; i < mn; ++i) {
		cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;
	}
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t;
  t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}