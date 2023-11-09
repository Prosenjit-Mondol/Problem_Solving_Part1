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
    int maxlength = 0, minlength = 110, maxindex = 0, minindex = 0;
    string o[4];
    int c[4];

    for (int i = 0; i < 4; i++) {
        getline(cin, o[i]);
        c[i] = o[i].length() - 2;
    }

    sort(c, c + 4);

    bool hasMax = c[3] >= c[2] * 2;
    bool hasMin = c[0] <= c[1] / 2;

    if (hasMax == hasMin) {
        cout << "C";
    } else if (hasMin) {
        for (int i = 0; i < 4; i++) {
            if (c[0] + 2 == o[i].length()) {
                cout << o[i].at(0);
            }
        }
    } else if (hasMax) {
        for (int i = 0; i < 4; i++) {
            if (c[3] + 2 == o[i].length()) {
                cout << o[i].at(0);
            }
        }
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