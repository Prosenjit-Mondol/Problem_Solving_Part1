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
    int z = 0, n;
    cin >> n;
    vector<ll> vp, vn, v1, v2, v3;
    for (int i = 0; i < n; i++)
    {
        ll o;
        cin >> o;
        if (o > 0)
        {
            vp.push_back(o);
        }
        else if (o < 0)
            vn.push_back(o);
        else
            z++;
    }
    v1.push_back(vn[vn.size() - 1]);
    vn.pop_back();

    if (vp.size() == 0)
    {
        v2.push_back(vn[vn.size() - 1]);
        vn.pop_back();
        v2.push_back(vn[vn.size() - 1]);
        vn.pop_back();
    }
    else
    {
        for (int i = 0; i < vp.size(); i++)
        {
            v2.push_back(vp[i]);
        }
    }
    for (int i = 0; i < z; i++)
    {
        v3.push_back(0);
    }
    for (int i = 0; i < vn.size(); i++)
    {
        v3.push_back(vn[i]);
    }

    cout<<v1.size();
    for (int i = 0; i <v1.size(); i++)
    {
        cout<<" "<<v1[i]; 
    }
    cout<<'\n';
    cout<<v2.size();
    for (int i = 0; i <v2.size(); i++)
    {
        cout<<" "<<v2[i]; 
    }
    cout<<'\n';
    cout<<v3.size();
    for (int i = 0; i <v3.size(); i++)
    {
        cout<<" "<<v3[i]; 
    }
    cout<<'\n';
}

//------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}