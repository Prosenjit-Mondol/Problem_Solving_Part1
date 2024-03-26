#include <bits/stdc++.h>
using namespace std;

// function to construct a palindromic string
string solve(string S)
{
    int N = S.length();
    string ans(N, ' ');

    // frequency array to count the occurrence of each
    // character
    int freq[26] = {};
    for (int i = 0; i < N; i++) {
        freq[S[i] - 'A'] += 1;
    }

    // Count the number of character having odd frequency
    int cnt = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            cnt += 1;
        }
    }

    // If more than one characters have odd frequency, then
    // no solution exists
    if (cnt > 1)
        return "NO SOLUTION";

    int left = 0, right = N - 1;
    for (int i = 0; i < N; i++) {
        if (freq[S[i] - 'A'] % 2 == 1) {
            ans[N / 2] = S[i];
            freq[S[i] - 'A'] -= 1;
        }
        while (freq[S[i] - 'A'] > 0) {
            ans[left++] = ans[right--] = S[i];
            freq[S[i] - 'A'] -= 2;
        }
    }
    return ans;
}

int main()
{
    // Sample Input
    string S;
    cin>>S;
    cout << solve(S) << endl;
    return 0;
}