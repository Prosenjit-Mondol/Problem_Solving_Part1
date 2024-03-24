#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define all(f) (f).begin(), (f).end()
#define rall(f) (f).rbegin(), (f).rend()

int n, k;
vector<ll> v;
const int mod = 1e9 + 7;

//---------------------------------------------------------------------------
inline ll Norm(ll a, ll M)
{
     a %= M;
     if (a < 0)
          a += M;
     return a;
}
inline ll modAdd(ll a, ll b, ll M)
{
     a = Norm(a, M), b = Norm(b, M);
     return (a + b) % M;
}
inline ll modSub(ll a, ll b, ll M)
{
     a = Norm(a, M), b = Norm(b, M);
     ll S = (a - b) % M;
     if (S < 0)
          S += M;
     return S;
}

ll mx_sum()
{
     ll cur = 0LL, mx = 0;
     for (int i = 1; i <= n; i++)
     {
          cur += v[i];
          mx = max(mx, cur);
          cur = max(0LL, cur);
     }
     return mx;
}

void Solve()
{
     v.clear();
     cin >> n >> k;
     v.resize(n + 2);
     ll tmp = 0;
     for (int i = 1; i <= n; i++)
     {
          cin >> v[i];
          tmp += v[i];
     }
     ll res = mx_sum();
     tmp -= res;
     for (int i = 1; i <= k; i++)
     {
          ll cur = res;
          res = modAdd(cur, res, mod);
          res %= mod;
     }
     tmp %= mod;
     res = modAdd(res, tmp, mod);
     cout << res << '\n';
}

int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int tests = 1;
     cin >> tests;
     while (tests--)
          Solve();
     return 0;
}

// in the end, it doesn't even matter
