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
        if (b>o)
        {
            f=1;
        }
        b=o;
    }
    if (f==0)
    {
        cout<<"YES"<<'\n';
        return;
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] >=10)
        {
            int a = v[i] / 10;
            int b = v[i] % 10;
            if (v[i + 1] > 10)
                c = v[i + 1] / 10;
                
            else
                c = v[i + 1];

            if ((b > a) && ((c >b)||(b<v[i+1])))
            {
                v1.push_back(a);
                v1.push_back(b);
            }

            else
            {
                v1.push_back(v[i]);
            }
        }
        else
        {
            v1.push_back(v[i]);
        }
    }
    
    v1.push_back(v[n - 1]);


    for (int i = 0; i < v1.size() - 1; i++)
    {
        if (v1[i] > v1[i + 1])
        {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
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