//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;
ll mod = 10e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    string str[] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
    int n;
    cin >> n;
    string s; 
 
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        cin >>s;
 
        bool isNumber = true;
        for (char c : s) {
            if (!isdigit(c)) {
                isNumber = false;
                break;
            }
        }
        if (isNumber) {
            int val = stoi(s);
            if (val < 18) {
                cnt++;
            }
        }
        else {
            for (int j = 0; j <11; ++j) {
                if (s == str[j]) {
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt << '\n';
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