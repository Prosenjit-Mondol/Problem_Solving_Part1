// Author  :  PROSENJIT MONDOL

#include <bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll = long long;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    ll sum = 0, n;
    cin >> n;
    vector<ll> v, r, p;
    for (int i = 0; i < n; i++)
    {
        ll o;
        cin >> o;
        v.push_back(o);
    }
    for (auto element : v)
    {
        cout << element << " ";
    }
    int c = 0;
    set<int> s;
    for (int i = 0; i < 40; i++)
    {
        s.clear();
        ll a = sum / r.size();
        p.push_back(a);
        r.clear();
        sum = 0;
        while (v.size())
        {
            for (int i = 0; i < v.size(); i++)
            {
                if (abs(a - v[i]))
                    ;
                {
                    r[r.size()] = abs(a - v[i]);
                    sum += abs(a - v[i]);
                }
                s.insert(abs(a - v[i]));
            }
        }
        c++;
        v.clear();
    }

    auto it = s.begin();
    if (s.size() == 1 && *it == 0)
    {
        cout << p.size() << '\n';
        for (auto element : p)
        {
            cout << element << " ";
        }
        cout << '\n';
    }
    else
        cout << -1 << '\n';
}

//------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}