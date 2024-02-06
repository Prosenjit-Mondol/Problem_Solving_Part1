#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> trace(n);
        for (int i = 0; i < n; ++i) {
            cin >> trace[i];
        }

        string s(n, 'a');

        for (int i = 1; i < n; ++i) {
            if (trace[i] == 0) {
                s[i] = s[i - 1] == 'a' ? 'b' : 'a';
            } else {
                s[i] = s[trace[i]];
            }
        }

        cout << s << endl;
    }

    return 0;
}
