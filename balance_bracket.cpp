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
    int sum=0,n;
    cin>>n;
    string s;
    cin>>s;
    stack<char>st;
    for (int i = 0; i <2*n; i++)
    {
        if (s[i]=='(')
        {
           st.push(s[i]);
        }
        int x=st.size();
        sum=max(sum,x);
        if (s[i]==')')
        {
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