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
    int n, m;
    cin >> n >> m;
    ll a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    if (n == 1 && m == 1)
    {
        cout << a[0][0] << '\n';
        return;
    }

    if (n == 1)
    {

        if (a[0][0] > a[0][1])
        {
            a[0][0] = a[0][1];
        }
        if (m >= 3)
        {
            if (a[0][m - 1] > a[0][m - 2])
            {
                a[0][m - 1] = a[0][m - 2];
            }
        }

        for (int i = 1; i < m - 1; i++)
        {
            if (a[0][i] > a[0][i + 1] && a[0][i] > a[0][i - 1])
            {
                a[0][i] = max(a[0][i + 1], a[0][i - 1]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << '\n';
        }
        return;
    }

    if (m == 1)
    {
        if (a[0][0] > a[1][0])
        {
            a[0][0] = a[1][0];
        }
        if (n >= 3)
        {
            if (a[0][n - 1] > a[0][n - 2])
            {
                a[0][n - 1] = a[0][n - 2];
            }
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i][0] > a[i+1][0] && a[i][0] > a[i-1][0])
            {
                a[i][0] = max(a[i+1][0], a[i-1][0]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << '\n';
        }
        return;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0)
            {
                if (j == 0)
                {
                    if (a[i][j] > a[i + 1][j] && a[i][j] > a[i][j + 1])
                    {
                        a[i][j] = max(a[i][j + 1], a[i + 1][j]);
                    }
                }
                if (j == m - 1)
                {
                    if (a[i][j] > a[i + 1][j] && a[i][j] > a[i][j - 1])
                    {
                        a[i][j] = max(a[i][j - 1], a[i + 1][j]);
                    }
                }
                else
                {
                    if (a[i][j] > a[i + 1][j] && a[i][j] > a[i][j + 1] && a[i][j] > a[i][j - 1])
                    {
                        a[i][j] = max(a[i][j - 1], max(a[i + 1][j], a[i][j + 1]));
                    }
                }
            }
            if (j == 0 && i != 0)
            {
                if (i == n - 1)
                {
                    if (a[i][j] > a[i][j + 1] && a[i][j] > a[i - 1][j])
                    {
                        a[i][j] = max(a[i - 1][j], a[i][j + 1]);
                    }
                }
                else
                {
                    if (a[i][j] > a[i + 1][j] && a[i][j] > a[i][j + 1] && a[i][j] > a[i - 1][j])
                    {
                        a[i][j] = max(a[i - 1][j], max(a[i + 1][j], a[i][j + 1]));
                    }
                }
            }
            if (i == n - 1 && j != 0)
            {
                if (j == m - 1)
                {
                    if (a[i][j] > a[i][j - 1] && a[i][j] > a[i - 1][j])
                    {
                        a[i][j] = max(a[i - 1][j], a[i][j - 1]);
                    }
                }
                else
                {
                    if (a[i][j] > a[i][j - 1] && a[i][j] > a[i][j + 1] && a[i][j] > a[i - 1][j])
                    {
                        a[i][j] = max(a[i - 1][j], max(a[i][j - 1], a[i][j + 1]));
                    }
                }
            }
            if (j == m - 1 && i != 0 && i != n - 1)
            {
                if (a[i][j] > a[i][j - 1] && a[i][j] > a[i - 1][j] && a[i][j] > a[i + 1][j])
                {
                    a[i][j] = max(a[i][j - 1], max(a[i - 1][j], a[i + 1][j]));
                }
            }
            else
            {
                if (a[i][j] > a[i][j - 1] && a[i][j] > a[i - 1][j] && a[i][j] > a[i + 1][j] && a[i][j] > a[i][j + 1])
                {
                    a[i][j] = max(max(a[i][j - 1], max(a[i - 1][j], a[i + 1][j])), a[i][j + 1]);
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << '\n';
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