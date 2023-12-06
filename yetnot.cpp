#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
   string s;
   cin>>s;
   int up=0,low=0.upc=0,lowc=0;
   stack<int>q,p;
   for (int  i = 0; i<s.length(); i++)
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
   
}


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