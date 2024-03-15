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
    int f=0,b=-1,c, n;
    cin >> n;
    vector<int> v, v1;
    for (int i = 0; i < n; i++)
    {
        int o;
        cin >> o;
        v.push_back(o);
    }
    int cur=v[n-1];
    for (int i =n-1; i>=0; i--)
    {
        if (v[i]>cur)
        {
            int a=v[i]%10;
            int b=v[i]/10;
            if (a>cur)
            {
                f=1;
                break;
            }
            if (b>a)
            {
                f=1;
                break;
            }
            cur=b;

        }
        else
        {
            cur=v[i];
        }
        
    }
    if(f==0)
    cout << "YES" << '\n';
    else
    cout << "NO" << '\n';
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