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
    int s;
    vector<int>v;
    cin>>s;
    string result;
        for (int d = 9; d >= 1; d--)
            if (s >= d) {
                result = char('0' + d) + result;
                s -= d;
            }
        cout << result << endl;
    
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