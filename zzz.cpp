//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    string s;
    cin>>s;
    int n=s.length();
    string ans(n,' ');
    int freq[26];
    for (int i = 0; i < n; i++) {
        freq[s[i] - 'A'] += 1;
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            cnt += 1;
        }
    }
    if (cnt > 1){
        cout<<"NO SOLUTION"<<'\n';
        return;
    }

    int left = 0, right = n - 1;
    for (int i = 0; i < n; i++) {
        if (freq[s[i] - 'A'] % 2 == 1) {
            ans[n/ 2] = s[i];
            freq[s[i] - 'A'] -= 1;
        }
        while (freq[s[i] - 'A'] > 0) {
            ans[left++] = ans[right--] = s[i];
            freq[s[i] - 'A'] -= 2;
        }
    }
    cout<<ans<<'\n';
}


//------------------------------------------------------------------------------
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