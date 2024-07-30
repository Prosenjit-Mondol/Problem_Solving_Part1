//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    ll sum=0,n;
    cin>>n;

    stack<ll>st;
    for (ll i = 1; i <=n; i++)
    {
        char x;
        cin>>x;
        if (x=='_'||x=='(')
        {
            st.push(i);
        }
        else
        {
            cout<<i<<" "<<st.top()<<'\n';
            sum+=(i-st.top());
            st.pop();
        }
        
    }
    cout<<sum<<'\n';
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