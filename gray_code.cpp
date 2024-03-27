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
  int n;
  cin >> n;
  vector<string> gray_code;
  gray_code.push_back("");
  for (int i = 0; i < n; i++)
  {
    int size = gray_code.size();

    for (int j = size - 1; j >= 0; j--)
    {
      gray_code.push_back(gray_code[j]);
    }

    size *= 2;
    for (int j = 0; j < size; j++)
    {
      if (j < gray_code.size() / 2)
      {
        gray_code[j] += "0";
      }
      else
      {
        gray_code[j] += "1";
      }
    }
    cout<<gray_code[0]<<" ";
  }

  for (auto el:gray_code)
  {
    cout << el << '\n';
  }
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