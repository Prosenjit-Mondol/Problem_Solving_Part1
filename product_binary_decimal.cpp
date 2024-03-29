// Author  :  PROSENJIT MONDOL

#include <bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll = long long;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
// bool isBinaryDecimal(int num) {
//     while (num > 0) {
//         int digit = num % 10;
//         if (digit != 0 && digit != 1)
//             return false;
//         num /= 10;
//     }
//     return true;
// }

vector<ll> v;

ll toBinary(ll x)
{
    vector<ll> tmp;
    while (x > 0)
    {
        tmp.push_back(x % 2);
        x /= 2;
    }

    ll val = 0;
    ll p = 1;
    for (int i = 0; i < tmp.size(); i++)
    {
        val += (tmp[i] * p);
        p *= 10;
    }
    return val;
}

void solve(void)
{
    
    int n;
    cin >> n;

    auto it = find(v.begin(), v.end(), n);
    if (it != v.end()||n == 1)
    {
        cout << "YES" << '\n';
        return;
    }

    for (int i = 1; i < v.size(); i++)
    {
        while (n % v[i] == 0)
        {
            n /= v[i];
            if (n == 1)
            {
                cout << "YES" << '\n';
                return;
            }
        }
    }
    cout << "NO" << '\n';
}

//------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 1; i < 35; i++)
    {
        v.push_back(toBinary(i));
    }
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}