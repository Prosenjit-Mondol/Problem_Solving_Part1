#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void Solve()
{
     string s;
     cin >> s;
     int up = 0, low = 0, upc = 0, lowc = 0;
     stack<int> qup, qlow;

     for (int i = 0; i < (int)s.size(); i++)
     {
          if (s[i] == 'B')
          {
               if (upc > 0)
               {
                    upc--;
                    int p = qup.top();
                    s[p] = '*';
                    qup.pop();
               }
               continue;
          }
          else if (s[i] == 'b')
          {
               if (lowc > 0)
               {
                    lowc--;
                    int p = qlow.top();
                    s[p] = '*';
                    qlow.pop();
               }
               continue;
          }

          if (s[i] >= 'a' and s[i] <= 'z')
          {
               qlow.push(i);
               lowc++;
          }
          else
          {
               qup.push(i);
               upc++;
          }
     }
     for (auto u : s)
     {
          if (u == '*' or u == 'B' or u == 'b')
               continue;
          cout << u;
     }
     cout << '\n';
}

int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int tests = 1;
     cin >> tests;
     while (tests--)
     {
          Solve();
     }
     return 0;
}

// in the end, it doesn't even matter
