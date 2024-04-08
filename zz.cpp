#include <bits/stdc++.h>
using namespace std;
const int inf = 3e5;
using ll = long long;
ll mod = 1e9 + 7;

#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper)

//------------------------------------------------------------------------------

void solve() {
    ll sumn, k;
    cin >> n >> k;
    vector<ll> v;
    for (int i = 0; i < n; i++) {
        ll o;
        cin >> o;
        v.push_back(o);
    }
    ll c = 0, f = 0, l = n - 1;
    for (int i = 1; i <= k; i++) {
        if (i % 2) {
            if (f <= l) {
                v[f] = max(0LL, v[f] - 1);
                if (v[f] == 0) {
                    c++;
                    f++;
                }
            }
        } else {
            if (l >= f) {
                v[l] = max(0LL, v[l] - 1);
                if (v[l] == 0) {
                    c++;
                    l--;
                }
            }
        }
    }

    cout << c << '\n';
}

//------------------------------------------------------------------------------

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
