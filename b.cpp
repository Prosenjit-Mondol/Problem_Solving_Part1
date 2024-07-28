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
    ll n, sum = 0;
    cin >> n;

    vector<ll> v, r, p;
    for (int i = 0; i < n; i++)
    {
        ll o;
        cin >> o;
        v.push_back(o);
        sum = sum + o;
    }
    r = v;
    set<int> s;
    auto it = s.begin();
    for (int i = 0; i < 40; i++)
    {
        if (*it == 0 && s.size() == 1)
        {
            break;
        }
        else
        {
            ll a = sum / r.size();
            cout << r.size() << " " << a;
            p.push_back(a);
            r.clear();
            sum = 0;
            while (v.size())
            {
                for (int i = 0; i < v.size(); i++)
                {
                    if (abs(a - v[i]))
                    {
                        r.push_back(abs(a - v[i]));
                        sum += abs(a - v[i]);
                    }
                    s.insert(abs(a - v[i]));
                }
            }
            v.clear();
        }
    }

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