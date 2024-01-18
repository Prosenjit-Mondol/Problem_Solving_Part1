#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;
ll mod = 10e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int c = 0, n;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    // Using iterators to traverse the set
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        if (*it != 0)
        {
            c++;
        }
    }

    if (c)
    {
        cout << c << '\n';
    }
    else
    {
        cout << 1 << '\n';
    }
}

//------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
