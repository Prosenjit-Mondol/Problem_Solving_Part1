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
    string s;
    int c = 0;
    cin >> s;
    if (s.length() == 1)
    {
        if (s == "z")
        {
            cout << "az" << '\n';
        }
        else
        {
            char x = s[0] + 1;
            cout << s << x << '\n';
        }
        return;
    }





    for (int i = 0; i < s.length(); i++)
    {
        if (c==0 && s[i]==s[i+1])
        {
            if (s[i]=='z')
            {
                cout<<"za";
            }
            else
            {
                char x=s[i]+1;
                cout<<s[i]<<x;
            }
            c=1;
        }
        else
        {
            cout<<s[i];
        }
        
    }
    if (c==0)
    {
        if (s[s.length()-1]=='z')
            {
                cout<<'a';
            }
            else
            {
                char x=s[s.length()-1]+1;
                cout<<x;
            }
    }
    
    cout << '\n';


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