//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll= long long ;
ll mod = 10e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    ll n, i, x, pm, cp = 0, cm = 0, pp, co = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        if (x < 0)
        {
            cm++;
            pm = i;
        }
        else if (x > 0)
        {
            cp++;
            pp = i;
        }
        else
            co++;
    }
    if (co)
    {
        cout << 0<<'\n';
        return;
    }
    if (cm > 0)
    {
        if (cm % 2 == 0)
        {
            cout << 1<<'\n';
            cout << pm << ' ' << 0<<'\n';
            return;
        }
        else
        {
            cout << 0<<'\n';
            return;
        }
    }
    cout << 1<<"\n";
    cout << pp << ' ' << 0<<'\n';
}


//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}