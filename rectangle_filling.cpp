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
    int ub = 0, uw = 0, ab = 0, aw = 0, lb = 0, lw = 0, rb = 0, rw = 0;
    
    int n, m;
    cin >> n >> m;
    char s[n][m + 1];
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> s[i][j];
            mp[s[i][j]]++;
        }
    }
    if (mp.size() == 1)
    {
        cout << "YES" << '\n';
        return;
    }
    
    for (int i = 0; i < m; i++)
    {
        if (s[0][i] == 'B')
        {
            ab = 1;
        }
        else
        {
            aw = 1;
        }
        if (s[n - 1][i] == 'B')
        {
            ub = 1;
        }
        else
        {
            uw = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i][0] == 'B')
        {
            lb = 1;
        }
        if (s[i][0] == 'W')
        {
            lw = 1;
        }
        if (s[i][m - 1] == 'B')
        {
            rb = 1;
        }
        if (s[i][m - 1] == 'W')
        {
            rw = 1;
        }
    }
    // cout<<ab<<" "<<ub<<" "<<lb<<" "<<rb<<" B"<<aw<<" "<<uw<<" "<<lw<<" "<<rw<<'\n';
    if ((ab == 1 && ub == 1 && lb == 1 && rb == 1) || (aw == 1 && uw == 1 && lw == 1 && rw == 1))
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
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