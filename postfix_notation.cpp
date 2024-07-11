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

  stack<int> st;
  while (1)
  {
    string s;
    cin>>s;
    if (s==")")
    {
      break;
    }
    
    if (s == "-" || s == "+" || s == "*" || s == "/")
    {
      int x=st.top();
      st.pop();
      int y=st.top();
      st.pop();
      int z;
      if (s=="+")
      {
        z=y+x;
      }
      if (s=="-")
      {
        z=y-x;
      }
      if (s=="*")
      {
        z=y*x;
      }
      if (s=="/")
      {
        z=y/x;
      }
      st.push(z);
    }
    else
    {
      int a=stoi(s);
      st.push(a);
    }
  }
  cout<<st.top()<<'\n';
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