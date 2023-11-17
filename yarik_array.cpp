#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int dp[N];
void solve(){
	int n;
	cin>>n;
	vector<int> a(n);
	vector<long long> dp(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		dp[i]=a[i];
	}
	int j=0;
	long long ans=dp[0];
	for(int i=1;i<n;i++){
		if(abs(a[i])%2!=abs(a[i-1])%2){
			dp[i]=max(dp[i],dp[i-1]+a[i]);
		}
		ans=max(ans,dp[i]);
	}
	cout<<ans<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}