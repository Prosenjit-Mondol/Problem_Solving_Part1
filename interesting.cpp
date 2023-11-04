#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(void)
{

  int n;
  cin >> n;
  vector<pair<int, int>> vp;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    vp.push_back({x, i + 1});
  }
  //sort(vp.begin(), vp.end());

  for(int i=0;i<n-1;i++){
    if(abs(vp[i+1].first-vp[i].first)>=2){
      cout<<"YES\n";
      cout<<min(vp[i].second,vp[i+1].second)<<" "<<max(vp[i].second,vp[i+1].second)<<'\n';
      return;
    }
  }
  cout<<"NO\n";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}