#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int calculatePermutationCount(const string& su) {
    int len = su.length();
    vector<int> freq(26, 1); // Frequency array for characters
    for(char c : su) {
        freq[c - 'a']++;
    }

    int result = 1;
    for(int i = 0; i < 26; i++) {
        result = (1LL * result * freq[i]) % MOD;
    }
    return result;
}

void solve() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    for(int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        string su = s.substr(a - 1, b - a + 1);
        int cnt = calculatePermutationCount(su);
        cout << cnt << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
