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
    int add, n, top = 0, beg = 1, aux = 2, end = 3;
    cin >> n;
    stack<int> stn, stbeg, staux, stend, stadd;

step1:
    if (n == 1)
    {
        cout << 1 << " " << 3 << '\n';
        goto step5;
    }

step2:
    top = top + 1;
    stn.push(n);
    stbeg.push(beg);
    staux.push(aux);
    stend.push(end);
    stadd.push(3);
    n = n - 1;
    beg = beg;
    aux = end;
    end = aux;
    goto step1;

step3:
    cout << 1 << " " << 3 << '\n';

step4:
    top = top + 1;
    stn.push(n);
    stbeg.push(beg);
    staux.push(aux);
    stend.push(end);
    stadd.push(5);
    n = n - 1;
    beg = aux;
    aux = beg;
    end = end;
    goto step1;

step5:
    if (top == 0)
    {
        return;
    }

    n = stn.top();
    
    beg = staux.top();
    
    aux = stbeg.top();
    
    end = stend.top();
    
    stepadd:
    add = stadd.top();
    stn.pop();
    staux.pop();
    stadd.pop();
    stbeg.pop();
    stend.pop();
    top = top - 1;
    goto stepadd;
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